package game.play;

import flixel.FlxG;
import flixel.FlxState;
import game.play.cards.BoosterPack;
import game.play.cards.CardSprite;
import game.play.cards.display.BoosterDisplay;
import haxe.ui.core.Screen;

using Lambda;

class CardState extends FlxState {
	public var showcasedCard:CardFace;

	var boosterPack:BoosterDisplay;

	override function create() {
		super.create();
		this.bgColor = 0xFF3D212D;
		boosterPack = new BoosterDisplay().fromBooster(new BoosterPack());

		showcasedCard = new CardFace();
		add(boosterPack);
		add(showcasedCard);
	}

	override function update(elapsed:Float) {
		super.update(elapsed);
		if (FlxG.keys.justPressed.SPACE) {
			for (card in boosterPack) {
				card.flip(true);
			}
		}

		if (FlxG.keys.justPressed.F5)
			FlxG.resetState();
		updateMouse();
		updateShowcase(null, elapsed);
	}

	private var _overlappingCard:Null<CardSprite>;
	var hoveringAny:Bool;
	private var _prevFlip:Bool = false;

	function updateMouse() {
		this.hoveringAny = false;
		for (contextSpr in this.boosterPack) {
			var cardSpr:CardSprite = cast contextSpr;
			if (cardSpr.mouseOverlaps()) {
				this.hoveringAny = !cardSpr.flipped || cardSpr.doubleFaced;
				if ((this._overlappingCard != cardSpr || _prevFlip != cardSpr.flipped) && this.hoveringAny)
					updateShowcase(cardSpr);
				this._overlappingCard = cardSpr;
				this._prevFlip = cardSpr.flipped;
				if (FlxG.mouse.justReleasedRight)
					Screen.instance.addComponent(cardSpr.contextMenu());
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
			this.showcasedCard.alpha = 1;
			this.showcasedCard.antialiasing = true;
		}
		_idleNoise += elapsed * 180 * 0.45;
		this.showcasedCard.x = FlxG.width - this.showcasedCard.width - 15;
		this.showcasedCard.y = (FlxG.height - this.showcasedCard.height) / 2;
		this.showcasedCard.x += Math.sin((Math.PI * _idleNoise) / 180) * 0.65;
		this.showcasedCard.y -= Math.cos((Math.PI * _idleNoise) / 180) * 0.65;
		this.showcasedCard.update(elapsed);
	}

	override function draw() {
		super.draw();
		this.showcasedCard.draw();
	}
}
