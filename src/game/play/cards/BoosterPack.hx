package game.play.cards;

import backend.cards.CardGroup;
import flixel.FlxG;
import haxe.ds.StringMap;
import scryfall.search.ScrySearch;
import scryfall.search.cards.QuerySearchResult.CardCollection;

class BoosterPack {
	private static var _setCache:StringMap<CardCollection> = new StringMap();

	private var _cards:CardGroup = [];

	var setCode(get, never):String;

	function get_setCode():String {
		return Main.SET_CODE;
	}

	public function new() {
		if (!_setCache.exists(setCode))
			_setCache.set(setCode, ScrySearch.queryCard('e:$setCode').getCollection());
		var setCards = _setCache.get(setCode);

		var isMythic = FlxG.random.bool(20);
		for (i in 0...10)
			_cards.push(setCards.randomQuery('r:common'));
		for (i in 0...3)
			_cards.push(setCards.randomQuery('r:uncommon'));
		_cards.push(setCards.randomQuery('r:${isMythic ? 'mythic' : 'rare'}'));
	}
}
