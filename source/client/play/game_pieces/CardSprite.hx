package client.play.game_pieces;

import flixel.FlxG;
import flixel.FlxGame;
import flixel.FlxSprite;
import flixel.addons.effects.FlxSkewedSprite;
import flixel.math.FlxMath;
import flixel.math.FlxPoint;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxTimer;
import lime.app.Future;
import lime.graphics.Image;
import lime.math.Vector2;
import openfl.display.BitmapData;
import scryfall.Card;

class CardSprite extends FlxSkewedSprite {
	private static inline final MARGIN_X:Int = 25;
	private static inline final MARGIN_Y:Int = 25;

	public static var cardWidth:Float = 150;
	public static var cardHeight:Float = 210;

	private final _card:Card;
	private var prevWidth:Float;
	private var _cardWidth:Null<Float>;
	private var _gameIndex(default, set):Int;
	private var showcase(default, null):Bool = false;

	private var _trackingMouse:Bool = false;

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
			this.x = MARGIN_X + (index % 5) * (CardSprite.cardWidth + 1);
			this.y = MARGIN_Y + Math.floor(index / 5) * cardHeight + 15;
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

	private var _angularDrag:Float = 0;
	override function update(elapsed:Float) {
		super.update(elapsed);
		prevWidth = FlxMath.lerp(prevWidth, _cardWidth, elapsed * 11.1);
		this.setGraphicSize(prevWidth);
		this.matrixExposed = this.hovering;

		if (this._trackingMouse) {
			this.x += FlxG.mouse.deltaX;
			this.y += FlxG.mouse.deltaY;

			this._angularDrag += (FlxG.mouse.deltaX * (Math.max(FlxG.mouse.deltaY, 1)));
			this._angularDrag = Math.min(Math.max(this._angularDrag, -120), 120);
		}

		this.angle = FlxMath.lerp(this.angle, this._angularDrag, elapsed * 9.1);
		this._angularDrag *= (this._trackingMouse ? .85 : 0.05);
		// this.updateHitbox();
	}

	public function offHover():Void {
		_cardWidth = cardWidth;
		this.hovering = false;
	}

	private static final MOUSE_INFLUENCE:Float = 0.05;

	public function onHover():Void {
		if (!this._trackingMouse) {
			var mousePointOnCard = getRelativeMousePosition();
			var mouseVector:Vector2 = new Vector2(mousePointOnCard.x / this.width - 0.5, mousePointOnCard.y / this.height - 0.5);

			this.transformMatrix.c = -(mouseVector.x * (mouseVector.y * 2)) * MOUSE_INFLUENCE;
			//this.transformMatrix.b = -(mouseVector.y * (mouseVector.y * 2)) * MOUSE_INFLUENCE;
			this.transformMatrix.d = 1 - Math.abs(mouseVector.y) * MOUSE_INFLUENCE;

			_cardWidth = cardWidth * 1.15;
			this.hovering = true;
		}
	}

	public function startTracking() {
		this._trackingMouse = true;
		this.hovering = false;
		// offHover();
	}

	public function stopTracking() {
		this.set__gameIndex(this._gameIndex);
		this._trackingMouse = false;
		offHover();
	}

	public static function generateShowcaseCard(cardSpr:CardSprite) {
		var cardSpr = new CardSprite(cardSpr._card);
		cardSpr.loadGraphicFromSprite(cardSpr);
		cardSpr.showcase = true;
		cardSpr.x = FlxG.width - cardWidth;
		return cardSpr;
	}

	public inline function getRelativeMousePosition():FlxPoint {
		return (FlxG.mouse.getWorldPosition() - FlxPoint.get(this.x, this.y));
	}
}
