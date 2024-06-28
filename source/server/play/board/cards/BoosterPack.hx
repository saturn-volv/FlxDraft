package server.play.board.cards;

import backend.encoding.UrlEncodedString;
import scryfall.Card;
import scryfall.cards.Rarity;
import scryfall.search.ScrySearch;
import scryfall.search.cards.QuerySearchResult.CardCollection;

/**
 * @variable commonReplacesLand The chance, as a percentage (where 0.0 = 0% and 1.0 = 100%), that a common has to replace the land card in the booster.
 */
typedef BoosterPackSpread = {
	common:Int,
	uncommon:Int,
	rare:Int,
	lands:Int,
	/**
	 * The chance, as a percentage (where 0.0 = 0% and 1.0 = 100%), that a common has to replace the land card in the booster.
	 */
	?commonReplacesLand:Float,
	?wildcards:Int,
	?foils:Int
}

class BoosterPack {
	private static inline final DRAFT_COMMON_DIST:Int = 10;
	private static inline final DRAFT_UNCOMMON_DIST:Int = 3;
	private static inline final DRAFT_RARE_DIST:Int = 1;
	private static var setCards(get, null):CardCollection;

	private static function get_setCards() {
		return setCards ??= ScrySearch.queryCard('-t:basic e:$setCode is:booster').getCollection();
	}

	private static var setCode:String;

	private var cardsInside:Array<Card> = [];

	public function new(?spreads:BoosterPackSpread) {
		setCode = Game.instance.gameSettings.set;

		var commons:Int = spreads?.common ?? DRAFT_COMMON_DIST;
		var uncommons:Int = spreads?.uncommon ?? DRAFT_UNCOMMON_DIST;
		var rares:Int = spreads?.rare ?? DRAFT_RARE_DIST;

		for (i in 0...(commons + uncommons + rares)) {
			var rarity:Rarity = COMMON;
			if (i < commons)
				rarity = COMMON;
			else if ((i - commons) < uncommons)
				rarity = UNCOMMON;
			else if ((i - commons - uncommons) < rares)
				rarity = RARE;
			if (rarity == RARE && Std.random(8) == 0)
				rarity = MYTHIC;
			cardsInside.push(getBoosterValidCard(rarity));
		}

		if ((spreads?.wildcards ?? 0) >= 0) {
			for (i in 0...(spreads?.wildcards ?? 0)) {
				var wildCardDist = determineWildcardDistribution();
				cardsInside.push(getBoosterValidCard(wildCardDist.rarity, wildCardDist.doublefaced));
			}
		}
		if ((spreads?.foils ?? 0) >= 0) {
			for (i in 0...(spreads?.foils ?? 0))
				cardsInside.push(getBoosterFoilCard());
		}
		if ((spreads?.lands ?? 1) >= 1) {
			for (i in 0...(spreads?.lands ?? 1)) {
				var replaceByCommon:Bool = !((Std.random(100) / 100) >= (spreads?.commonReplacesLand ?? 0.0));
				if (replaceByCommon)
					cardsInside.push(setCards.randomQuery('-t:basic r:common'));
				else
					cardsInside.push(getBoosterValidBasicLandCard());
			}
		}
	}

	private function determineWildcardDistribution():{rarity:Rarity, ?doublefaced:Bool} {
		var target:Float = Std.random(1000) / 10;
		if ((target -= 41.7) <= 0)
			return {rarity: COMMON};
		if ((target -= 33.4) <= 0)
			return {rarity: UNCOMMON};
		if ((target -= 8.3) <= 0)
			return {rarity: UNCOMMON, doublefaced: true};
		if ((target -= 6.7) <= 0)
			return {rarity: RARE};
		return {rarity: MYTHIC, doublefaced: Std.random(1000) <= 11};
	}

	public function chooseCard(index:Int):Card {
		return this.cardsInside[index % this.cardsInside.length];
	}

	private function getBoosterValidCard(rarity:Rarity, ?doublefaced:Bool = false) {
		var suffix:UrlEncodedString = '';
		if (doublefaced)
			suffix = 'is:dfc';
		return setCards.randomQuery('r:$rarity $suffix');
	}

	private function getBoosterValidBasicLandCard() {
		return ScrySearch.randomCard('t:basic e:$setCode');
	}

	private function getBoosterFoilCard() {
		var borderless:Bool = Std.random(200) == 0;
		var suffix:UrlEncodedString = '';
		if (borderless)
			suffix = 'is:fetchland border:borderless';
		return getRandomCard('-t:basic e:$setCode is:booster $suffix');
	}

	private static function getRandomCard(query:String) {
		return ScrySearch.randomCard(query);
	}
}
