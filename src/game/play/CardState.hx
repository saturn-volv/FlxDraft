package game.play;

import flixel.FlxG;
import flixel.FlxState;
import flixel.math.FlxMath;
import game.play.cards.BoosterPack;
import game.play.cards.CardSprite;
import game.play.cards.display.BoosterDisplay;
import haxe.ui.core.Screen;

using Lambda;

class CardState extends FlxState {
	public var cardDisplay:BoosterDisplay;
	public var showcasedCard:CardFace;
	public var cardOfHolding:CardSprite; // I'm so funny.

	override function create() {
		super.create();
		this.bgColor = 0xFF3D212D;
		cardDisplay = new BoosterDisplay().fromBooster(new BoosterPack());

		showcasedCard = new CardFace();
		cardOfHolding = new CardSprite();
		add(cardDisplay);
		add(showcasedCard);
		add(cardOfHolding);
	}

	override function update(elapsed:Float) {
		super.update(elapsed);
		if (FlxG.keys.justPressed.SPACE) {
			for (card in cardDisplay) {
				card.flip(true);
			}
		}

		if (FlxG.keys.justPressed.F5)
			FlxG.resetState();
		updateMouse(elapsed);
		updateShowcase(null, elapsed);

		this.cardOfHolding.update(elapsed);
	}

	private var _overlappingCard:Null<CardSprite>;
	var hoveringAny:Bool;
	private var _prevFlip:Bool = false;

	public function onMouseClicked(isRight:Bool = false) {
		if (!isRight && _overlappingCard != null && !_openedContext) {
			this.cardOfHolding = _overlappingCard;
			this.cardOfHolding.holding = true;
			this.cardDisplay.members.remove(_overlappingCard);
		}
		_openedContext = false;
	}

	private var _openedContext:Bool = false;

	public function onMouseReleased(isRight:Bool = false) {
		if (isRight) {
			if (_overlappingCard != null) {
				_openedContext = true;
				Screen.instance.addComponent(_overlappingCard?.contextMenu());
			}
		}
		if (!this.cardOfHolding.isEmpty && !isRight) {
			this.cardOfHolding.holding = false;
			this.cardDisplay.insert(this._overlappingCard != null ? (this.cardDisplay.indexOf(this._overlappingCard)
				+ (this._overlappingCard.getMousePositionRelative().x >= this._overlappingCard.width / 2 ? 1 : 0)) : this.cardDisplay.members.length
				+ 1,
				this.cardOfHolding);
			this.cardOfHolding = new CardSprite();
		}
	}

	function updateMouse(elapsed:Float) {
		if (FlxG.mouse.justPressedRight)
			onMouseClicked(true);
		if (FlxG.mouse.justReleasedRight)
			onMouseReleased(true);
		if (FlxG.mouse.justPressed)
			onMouseClicked();
		if (FlxG.mouse.justReleased)
			onMouseReleased();

		if (!this.cardOfHolding.isEmpty) {
			@:privateAccess
			var drag = FlxMath.bound(Math.abs(FlxG.mouse.deltaX) / FlxG.width * elapsed * 1000 * 0.85, 0, 1);
			this.cardOfHolding.angle = FlxMath.lerp(0, FlxG.mouse.deltaX > 0 ? 90 : -90, drag);
			this.cardOfHolding.x += FlxG.mouse.deltaX;
			this.cardOfHolding.y += FlxG.mouse.deltaY;
		}

		this.hoveringAny = false;
		for (contextSpr in this.cardDisplay) {
			var cardSpr:CardSprite = cast contextSpr;
			if (cardSpr.mouseOverlaps()) {
				this.hoveringAny = !cardSpr.flipped || cardSpr.doubleFaced;
				if ((this._overlappingCard != cardSpr || _prevFlip != cardSpr.flipped) && this.hoveringAny)
					updateShowcase(cardSpr);
				this._overlappingCard = cardSpr;
				this._prevFlip = cardSpr.flipped;
			}
		}

		if (!hoveringAny) {
			this._overlappingCard = null;
			this.showcasedCard.alpha = 0;
		}
	}

	private var _idleNoise:Float = 0;

	function updateShowcase(?cardSpr:CardSprite, elapsed:Float = 0) {
		if (cardSpr != null) {
			@:privateAccess
			this.showcasedCard = new CardFace().onBitmapLoaded((_) -> {
				this.showcasedCard.setGraphicSize(cardSpr.width * ((FlxG.height * 0.85) / cardSpr.height));
				this.showcasedCard.updateHitbox();
			}).refreshFromScryfall((cardSpr.flipped ? cardSpr.back : cardSpr.front)._imagePath);
			this.showcasedCard.antialiasing = true;

			_idleNoise += elapsed * 180 * 0.45;
			this.showcasedCard.x = FlxG.width - this.showcasedCard.width - 15;
			this.showcasedCard.y = (FlxG.height - this.showcasedCard.height) / 2;
			this.showcasedCard.x += Math.sin((Math.PI * _idleNoise) / 180) * 0.65;
			this.showcasedCard.y -= Math.cos((Math.PI * _idleNoise) / 180) * 0.65;
		}
		this.showcasedCard.update(elapsed);
	}

	override function draw() {
		super.draw();
		this.showcasedCard.draw();
		this.cardOfHolding.draw();
	}
}
