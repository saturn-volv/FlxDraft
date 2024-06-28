package server.user.player;

import server.play.board.cards.BoosterPack;
/*
    TODO: 
     - Code the Set integration into hxScry
     - Get the Set code, and try to determine standard Set information for boosters (i think this might need manual tweaking?).
*/
class Player {
    private final user:User;
    private final boosterPacks:Array<BoosterPack>;

    public function new(user:User) {
        this.user = user;
        
        boosterPacks = new Array<BoosterPack>();
        for (i in 0...3) {
            boosterPacks.push(new BoosterPack());
        }
    }
}