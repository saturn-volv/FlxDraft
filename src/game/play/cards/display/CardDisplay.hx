package game.play.cards.display;

import flixel.util.FlxSort;
import game.play.cards.CardSprite;

class CardDisplay extends CardSprite {
	public var members:Array<CardSprite> = [];

	override public function new(x:Float = 0, y:Float = 0) {
		super(x, y);
	}

	public function insert(index:Int, cardSpr:CardSprite) {
		if (index >= this.members.length)
			this.add(cardSpr);
		else
			this.members.insert(index, cardSpr);
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

	private function byIsTapped(card1:CardSprite, card2:CardSprite) {
		var isTapped:(Bool) -> Int = (b) -> return b ? 1 : 0;
		return FlxSort.byValues(-1, isTapped(card1.isTapped), isTapped(card2.isTapped));
	}

	private function byZ(card1:CardSprite, card2:CardSprite) {
		return FlxSort.byValues(-1, card1.z, card2.z);
	}

	override function draw() {
		super.draw();
		var newArr = this.members.copy();
		newArr.sort(byIsTapped);
		newArr.sort(byZ);
		for (card in newArr) {
			card.draw();
		}
	}

	public function iterator() {
		return members?.iterator();
	}

	public function keyValueIterator() {
		return members?.keyValueIterator();
	}
}
