package game.play.cards.display;

import flixel.FlxG;
import flixel.math.FlxMath;
import game.play.cards.BoosterPack;
import game.play.cards.CardSprite;

@:access(game.play.cards.BoosterPack)
class BoosterDisplay extends CardDisplay {
	private static final _CARDS_ON_SCREEN:Int = 5;
	private static final _CARD_PADDING:Int = 35;

	override public function new() {
		super();
	}

	public function fromBooster(boosterPack:BoosterPack) {
		for (card in boosterPack._cards) {
			var cardSpr = new CardSprite().fromCard(card);
			cardSpr.setGraphicSize((FlxG.width / _CARDS_ON_SCREEN - 15) * 0.6);
			this.add(cardSpr);
		}

		return this;
	}

	override function update(elapsed:Float) {
		super.update(elapsed);
		var screenRatio = FlxG.width / FlxG.height;
		for (index => card in this) {
			card.x = FlxMath.lerp(card.x, this.x + ((index % _CARDS_ON_SCREEN) * card.width + _CARD_PADDING), elapsed * 7.6);
			card.y = FlxMath.lerp(card.y, this.y + (Math.floor(index / _CARDS_ON_SCREEN) * card.height + (_CARD_PADDING * screenRatio)), elapsed * 7.6);
		}
	}
}
