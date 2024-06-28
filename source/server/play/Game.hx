package server.play;

import scryfall.search.ScrySearch;
import scryfall.Set;

typedef GameSettings = {
    var set:String;
}
class Game {
    public static var instance:Game;
    public var gameSettings:GameSettings;

    public function new(?setCode:String) {
        instance = this;
        this.gameSettings = {
            set: setCode ?? 'MH3'
        };
    }
}