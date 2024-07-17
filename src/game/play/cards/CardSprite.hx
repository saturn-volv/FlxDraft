package game.play.cards;

import assets.Paths;
import flixel.FlxBasic;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup.FlxTypedSpriteGroup;
import flixel.math.FlxMath;
import haxe.ui.containers.menus.Menu;
import openfl.display.BitmapData;
import scryfall.Card;

/* TODO:
	- Generate sprites from image urls
	- Have the sprite default to the card_back.png until the sides are loaded.
 */
class CardFace extends FlxSprite {
	private var _loadingFace:Bool = false;
	private var _imagePath:String;

	private var _onBmpLoaded:(BitmapData) -> Void = (_) -> {};

	public function onBitmapLoaded(onBitmapLoaded:(bitmap:BitmapData) -> Void):CardFace {
		this._onBmpLoaded = onBitmapLoaded;
		return this;
	}

	public function new(x:Float = 0, y:Float = 0) {
		super(x, y);
		loadGraphic(Paths.image('card_back'));
	}

	private var loadingSine:Float = 0;

	override function update(elapsed:Float) {
		if (_loadingFace) {
			loadingSine += 180 * elapsed * 0.45;
			this.alpha = 1 - (Math.sin((Math.PI * loadingSine) / 180) * 0.65);
		}
		super.update(elapsed);
	}

	public function copy() {
		return fromScryfall(this._imagePath);
	}

	public function refreshFromScryfall(uriPath:String):CardFace {
		this._imagePath = uriPath;
		RequestData.image(uriPath).onComplete(v -> {
			var width = this.width;
			this.loadGraphic(v);
			this._loadingFace = false;
			this.alpha = 1;
			this.setGraphicSize(width);
			this.updateHitbox();
			this._onBmpLoaded(v);
			this._onBmpLoaded = (_) -> {};
		});
		return this;
	}

	public static function fromScryfall(uriPath:String):CardFace {
		return new CardFace().refreshFromScryfall(uriPath);
	}
}

class CardSprite extends FlxBasic {
	public static final DEFAULT_CARD_WIDTH:Int = 488;
	public static final DEFAULT_CARD_HEIGHT:Int = 680;

	public var hovering(get, never):Bool;

	function get_hovering():Bool {
		return mouseOverlaps();
	}

	private var scale:{x:Float, y:Float} = {x: 1, y: 1};

	public var width:Float = DEFAULT_CARD_WIDTH;
	public var height:Float = DEFAULT_CARD_HEIGHT;

	public var front(get, never):CardFace;

	inline function get_front():CardFace {
		return _faces.members[0];
	}

	public var back(get, never):CardFace;

	inline function get_back():CardFace {
		return _faces.members[1];
	}

	private var _faces:FlxTypedSpriteGroup<CardFace>;

	private var _flipping:Bool = false;

	public var flipped(default, set):Bool = true;

	function set_flipped(v:Bool) {
		return this.flipped = this.showingBack = v;
	}

	public var x(get, set):Float;

	function get_x() {
		return this._faces.x;
	}

	function set_x(x:Float) {
		return this._faces.x = x;
	}

	public var y(get, set):Float;

	function get_y() {
		return this._faces.y;
	}

	function set_y(y:Float) {
		return this._faces.y = y;
	}

	override public function new(x:Float = 0, y:Float = 0) {
		super();
		this._faces = new FlxTypedSpriteGroup<CardFace>(x, y);
	}

	public var doubleFaced:Bool;

	public function fromCard(card:Card, waitForFirstFlip:Bool = false):CardSprite {
		@:privateAccess
		var cardObj = card._struct;
		doubleFaced = cardObj.card_faces != null;

		this.flipped = true;
		var backFace = new CardFace();
		@:privateAccess
		backFace._loadingFace = true;
		var frontFace = new CardFace().onBitmapLoaded((_) -> {
			@:privateAccess
			backFace._loadingFace = false;
			backFace.alpha = 1;
			flip(true);
			if (doubleFaced && !waitForFirstFlip)
				backFace.refreshFromScryfall(cardObj.card_faces[1].image_uris.png);
			else if (doubleFaced)
				this.onFlip((_) -> backFace.refreshFromScryfall(cardObj.card_faces[1].image_uris.png));
		}).refreshFromScryfall(!doubleFaced ? cardObj.image_uris.png : cardObj.card_faces[0].image_uris.png);
		this._faces.add(frontFace);
		this._faces.add(backFace);

		return this;
	}

	public function setGraphicSize(width:Float, ?height:Float) {
		var ratio:Float = width / this.width;
		this.width = width;
		this.height = height ?? this.height * ratio;
	}

	var showingBack:Bool = false;

	override function update(elapsed:Float) {
		super.update(elapsed);
		this._faces?.update(elapsed);

		if (this._flipping) {
			this.scale.x = FlxMath.lerp(this.scale.x, (this.flipped ? !showingBack : showingBack) ? 1 : 0, elapsed * 17);
			if (this.scale.x <= 0.005) {
				showingBack = !showingBack;
			}
			if (1 - this.scale.x < 0.005) {
				this.scale.x = 1;
				this.flipped = !this.flipped;
			}
			this._flipping = this.scale.x < 1;
		}
		if (this._faces.length > 0) {
			this.front.y = this.y;
			this.back.y = this.y;

			this.front.x = this.x + FlxMath.lerp(0, this.width / 2, 1 - this.scale.x);
			this.back.x = this.x + FlxMath.lerp(0, this.width / 2, 1 - this.scale.x);
			this.front.visible = !this.showingBack;
			this.back.visible = !this.front.visible;
			this.front.setGraphicSize(this.width * this.scale.x, this.height * this.scale.y);
			this.front.updateHitbox();
			this.back.setGraphicSize(this.front.width, this.front.height);
			this.back.updateHitbox();
		}
	}

	private var _onFlip:(Bool) -> Void = (_) -> return;

	public function onFlip(onFlip:(Bool) -> Void):CardSprite {
		this._onFlip = onFlip;
		return this;
	}

	public function flip(withAnim:Bool = true):Void {
		if (this._flipping) {
			this.flipped = !this.flipped;
			this.scale.x = 1;
		}
		if (!withAnim) {
			this.flipped = !this.flipped;
			return;
		}
		this._onFlip(!this.flipped);
		this._onFlip = (_) -> {};
		this._flipping = true;
	}

	override function draw():Void {
		super.draw();
		this._faces?.draw();
	}

	public function mouseOverlaps():Bool {
		var mousePosX = FlxG.mouse.x;
		var mousePosY = FlxG.mouse.y;

		var overlapingX:Bool = mousePosX > this.x && mousePosX < this.x + this.width;
		var overlapingY:Bool = mousePosY > this.y && mousePosY < this.y + this.height;

		return overlapingX && overlapingY;
	}

	private var _contextMenu:CardContextMenu;

	public function contextMenu():CardContextMenu {
		var menu = _contextMenu ?? (() -> {
			var m = new CardContextMenu();
			m.onMenuSelected = e -> {
				var txt = e.menuItem.text.toLowerCase();
				if (txt == "flip")
					flip(true);
				else if (txt == "tap")
					trace('TAPPED!');
			}
			return m;
		})();
		menu.left = FlxG.mouse.screenX;
		menu.top = FlxG.mouse.screenY;
		return _contextMenu ??= menu;
	}
}

@:xml('
<menu>
	<menu-item text="Flip"/>
	<menu-item text="Tap"/>
</menu>
')
class CardContextMenu extends Menu {}
