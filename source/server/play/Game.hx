package server.play;

import scryfall.Set;
import scryfall.search.ScrySearch;
import server.play.board.cards.BoosterPack.BoosterPackSpread;

typedef GameSettings = {
	var set:String;
}

class Game {
	public static var instance:Game;

	public var gameSettings:GameSettings;

	public var spreads:Null<BoosterPackSpread>;

	public function new(?setCode:String, ?spreads:BoosterPackSpread) {
		instance = this;
		this.spreads = spreads;
		this.gameSettings = {
			set: setCode ?? 'MH3'
		};
	}
}
