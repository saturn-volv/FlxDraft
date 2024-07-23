package;

import game.play.states.BoosterPackState;
import flixel.FlxG;
import flixel.FlxGame;
import game.play.CardState;
import haxe.ui.Toolkit;
import haxe.ui.backend.flixel.CursorHelper;
import openfl.display.Sprite;

class Main extends Sprite {
	public static final SET_CODE:String = 'MH3';

	public function new() {
		super();
		addChild(new FlxGame(0, 0, BoosterPackState, 60, 60, true));
		Toolkit.theme = "dark";
		Toolkit.init();
		FlxG.mouse.useSystemCursor = true;
		CursorHelper.useCustomCursors = !FlxG.mouse.useSystemCursor;
	}
}
