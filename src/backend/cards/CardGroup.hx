package backend.cards;

import backend.encoding.UrlEncodedString;
import scryfall.Card;
import scryfall.search.ScrySearch;
import scryfall.search.cards.QuerySearchResult.CardCollection;

using Lambda;
using StringTools;

@:forward
abstract CardGroup(Array<Card>) from Array<Card> to Array<Card> {
	public function new(v:Array<Card>) {
		this = v;
	}

	// format: "SET:{num,num,num,num,num}";

	@:from
	public static function fromCollection(coll:CardCollection) {
		return new CardGroup(coll);
	}

	@:from
	public static function fromString(str:String):CardGroup {
		return ScrySearch.queryCard(keyToQuery(str)).getCollection();
	}

	// format: "{num,num,num}"

	@:to
	public function toString():String {
		var key:String = '${Main.SET_CODE}:{';
		for (i => card in this) {
			@:privateAccess
			key += '${i > 0 ? ',' : ''}${card._struct.collector_number}';
		}
		key += '}';
		return key;
	}

	private static function keyToQuery(str:String):UrlEncodedString {
		var setCode:String = str.split(':')[0];
		var values:Array<Int> = str.split(':')[1].replace('{', '').replace('}', '').split(',').map(v -> {
			return Std.parseInt(v);
		});

		var query:String = 'e:$setCode (';
		for (i => cn in values) {
			query += '${i > 0 ? ' or ' : ''}cn:$cn';
		}
		query += ')';
		trace(query);
		return query;
	}
}
