package game.play.cards.display;

import game.play.cards.CardSprite;

class CardDisplay extends CardSprite {
	public var members:Array<CardSprite> = [];

	override public function new(x:Float = 0, y:Float = 0) {
		super(x, y);
	}

	public function add(cardSpr:CardSprite) {
		return this.members.push(cardSpr);
	}

	override function update(elapsed:Float) {
		super.update(elapsed);
		for (card in this) {
			card.update(elapsed);
		}
	}

	override function draw() {
		super.draw();
		for (card in this)
			card.draw();
	}

	public function iterator() {
		return members?.iterator();
	}

	public function keyValueIterator() {
		return members?.keyValueIterator();
	}
}
