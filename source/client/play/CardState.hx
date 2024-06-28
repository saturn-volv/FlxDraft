package client.play;

import client.play.game_pieces.CardSprite;
import flixel.FlxG;
import flixel.FlxState;
import flixel.group.FlxSpriteGroup.FlxTypedSpriteGroup;
import flixel.group.FlxSpriteGroup;
import flixel.util.FlxSort;
import scryfall.Card;
import server.play.Game;
import server.user.User;
import server.user.player.Player;

using Lambda;

class CardState extends FlxState {
	private static inline final MARGIN_X:Int = 25;
	private static inline final MARGIN_Y:Int = 25;

	private var cards:FlxTypedSpriteGroup<CardSprite>;

	private var selectedCard:CardSprite;

	override function create() {
		super.create();
		this.bgColor = 0xFF3D212D;
		this.cards = new FlxTypedSpriteGroup<CardSprite>(MARGIN_X, MARGIN_Y);
		add(cards);

		new Game('mh3');
		var players:Array<Player> = [];
		for (name in ['debug_user']) {
			players.push(new Player(new User(name)));
		}

		@:privateAccess
		for (card in players[0].boosterPacks[0].cardsInside)
			addCard(card);

		selectedCard = CardSprite.generateShowcaseCard(cards.members[0]);
		add(selectedCard);
	}

	public function addCard(card:Card):CardSprite {
		var spr = new CardSprite(card);
		@:privateAccess
		spr._gameIndex = this.cards.length;
		this.cards.add(spr);

		return spr;
	}

	override function update(elapsed:Float) {
		super.update(elapsed);
		#if desktop
		if (FlxG.keys.justPressed.F5) {
			FlxG.resetState();
		}
		#end

		var hoverFilter = cards.members.filter(f -> f.hovering);
		for (card in cards.members) {
			if (FlxG.mouse.overlaps(card) && (hoverFilter.length <= 0 || hoverFilter.contains(card))) {
				card.onHover();
			} else
				card.offHover();
		}
		cards.sort((i, a, b) -> {
			FlxSort.byValues(i, a.hovering ? 1 : 0, b.hovering ? 1 : 0);
		});

		if (hoverFilter.length > 0) {
			selectedCard.loadGraphicFromSprite(hoverFilter[0]);
			selectedCard.setGraphicSize(CardSprite.cardWidth * 2.2);
			selectedCard.updateHitbox();
			selectedCard.x = FlxG.width - selectedCard.width;
			selectedCard.visible = true;
		} else
			selectedCard.visible = false;
	}
}
