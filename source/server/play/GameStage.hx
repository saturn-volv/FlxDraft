package server.play;

import server.user.player.Player;
import server.user.User;

interface GameStage {
    public var activePlayers:Array<Player>;
}