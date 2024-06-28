package;

import client.play.CardState;
import flixel.FlxG;
import flixel.FlxGame;
import openfl.display.Sprite;

class Main extends Sprite {
	public function new() {
		super();
		addChild(new FlxGame(0, 0, CardState, 60, 60, true));
		FlxG.mouse.useSystemCursor = true;
	}
}
