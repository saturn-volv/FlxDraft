package client.play.game_pieces;

import flixel.FlxG;
import flixel.FlxGame;
import flixel.FlxSprite;
import flixel.math.FlxMath;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxTimer;
import lime.app.Future;
import lime.graphics.Image;
import openfl.display.BitmapData;
import scryfall.Card;

class CardSprite extends FlxSprite {
	public static var cardWidth:Float = 150;
	public static var cardHeight:Float = 210;

	private final _card:Card;
	private var prevWidth:Float;
	private var _cardWidth:Null<Float>;
	private var _gameIndex(default, set):Int;
	private var showcase(default, null):Bool = false;

	private function set_showcase(v:Bool) {
		if (v)
			this.setGraphicSize(cardWidth * 2.3);
		else
			this.setGraphicSize(cardWidth);
		return showcase = v;
	}

	public var hovering:Bool = false;

	private function set__gameIndex(index:Int):Int {
		if (!this.showcase) {
			this.x = (index % 5) * (CardSprite.cardWidth + 1);
			this.y = Math.floor(index / 5) * cardHeight + 15;
		}
		return _gameIndex = index;
	}

	public function new(card:Card, ?graphic:FlxGraphicAsset) {
		super(0, 0, graphic);
		this._card = card;
		if (graphic == null) {
			@:privateAccess
			BitmapData.loadFromFile(this._card._struct.image_uris?.large ?? this._card._struct.card_faces[0].image_uris.large).onComplete(v -> {
				this.loadGraphic(v);
				this.setGraphicSize(cardWidth);
				this.updateHitbox();
				this.prevWidth = cardWidth;
				this._cardWidth = cardWidth;
			}).onError((v) -> trace('oopsie!'));
		}
		this.antialiasing = true;
	}

	override function update(elapsed:Float) {
		super.update(elapsed);
		prevWidth = FlxMath.lerp(prevWidth, _cardWidth, elapsed * 11.1);
		this.setGraphicSize(prevWidth);
		// this.updateHitbox();
	}

	public function offHover():Void {
		_cardWidth = cardWidth;
		this.hovering = false;
	}

	public function onHover():Void {
		_cardWidth = cardWidth * 1.15;
		this.hovering = true;
	}

	public static function generateShowcaseCard(cardSpr:CardSprite) {
		var cardSpr = new CardSprite(cardSpr._card);
		cardSpr.loadGraphicFromSprite(cardSpr);
		cardSpr.showcase = true;
		cardSpr.x = FlxG.width - cardWidth;
		return cardSpr;
	}
}
