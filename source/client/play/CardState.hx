package client.play;

import client.play.game_pieces.CardSprite;
import flixel.FlxG;
import flixel.FlxState;
import flixel.group.FlxSpriteGroup.FlxTypedSpriteGroup;
import flixel.group.FlxSpriteGroup;
import flixel.util.FlxSort;
import lime.ui.MouseCursor;
import openfl.ui.Mouse;
import scryfall.Card;
import server.play.Game;
import server.user.User;
import server.user.player.Player;

using Lambda;

class CardState extends FlxState {

	private var cards:FlxTypedSpriteGroup<CardSprite>;

	private var holdingCard:Bool = false;

	public var cardOnCursor:Null<CardSprite> = null;

	private var selectedCard:CardSprite;

	override function create() {
		super.create();
		this.bgColor = 0xFF3D212D;
		this.cards = new FlxTypedSpriteGroup<CardSprite>();
		add(cards);

		/*new Game('rvr', {
			common: 10,
			uncommon: 3,
			rare: 2,
			lands: 0
		});*/
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

		cards.sort((i, a, b) -> {
			@:privateAccess
			if (a._trackingMouse)
				return 1;
			return a.hovering || !b.hovering ? 1 : -1;
		});

		this.selectedCard.visible = !this.holdingCard;
		if (!this.holdingCard) {
			var hoverFilter = cards.members.filter(f -> f.hovering);
			for (card in cards.members) {
				if (FlxG.mouse.overlaps(card) && (hoverFilter.length <= 0 || hoverFilter.contains(card))) {
					card.onHover();
				} else
					card.offHover();
			}

			if (hoverFilter.length > 0) {
				selectedCard.loadGraphicFromSprite(hoverFilter[0]);
				selectedCard.setGraphicSize(CardSprite.cardWidth * 2.2);
				selectedCard.updateHitbox();
				selectedCard.x = FlxG.width - selectedCard.width;
				selectedCard.visible = true;
				Mouse.cursor = MouseCursor.MOVE;

				if (FlxG.mouse.justPressed) {
					this.cardOnCursor = hoverFilter[0];

					cardOnCursor.startTracking();
					holdingCard = true;
				}
			} else {
				Mouse.cursor = MouseCursor.ARROW;
				selectedCard.visible = false;
			}
		} else {
			if (FlxG.mouse.justReleased) {
				cardOnCursor.stopTracking();
				holdingCard = false;
			}
		}
	}
}
