package game.play.states;

import game.play.cards.BoosterPack;
import game.play.cards.display.BoosterDisplay;
import game.play.cards.display.CardSprite;

class BoosterPackState extends CardState {

    override public function new() {
        super(new BoosterDisplay().fromBooster(new BoosterPack()));
    }

    override function onHeldCardDropped(card:CardSprite) {
		this.cardDisplay.replace(_dummyCard, card);
        super.onHeldCardDropped(card);
    }

    override function updateCardOfHolding(elapsed:Float) {
        super.updateCardOfHolding(elapsed);
        /*var pos = this.cardDisplay.members.length-1;
        if (this._overlappingCard != null) pos = this.cardDisplay.members.indexOf(this._overlappingCard) + (this._overlappingCard.getMousePositionRelative().x >= this._overlappingCard.width / 2 ? 1 : 0);
        this.cardDisplay.moveTo(pos, this._dummyCard);*/
    }
}