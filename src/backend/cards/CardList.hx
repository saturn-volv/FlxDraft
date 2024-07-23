package backend.cards;

import scryfall.Card;

@:forward
abstract CardList(Map<Card, Int>) to Map<Card,Int> {
    private function new() {
        this = new Map();
    }
    @:from
    static inline function fromArray(arr:Array<Card>):CardList {
        var v = new CardList();
        for (card in arr) {
            v[card]++;
        }

        return v;
    }

    public function push(card:Card) {
        return this[card]++;
    }

    @:to
    public function toString():String {
        var str:String = '';
        for (card => count in this) {
            str += '$count ${card.name}\n';
        }
        return str;
    }

    @:arrayAccess
    public inline function get(k:Card) {
        return this.get(k);
    }
    @:arrayAccess
    public inline function arrayWrite(k:Card, v:Int):Int {
        this.set(k, v ?? 0);
        return v;
    }
}   