package assets;

import flixel.system.FlxAssets.FlxGraphicAsset;
import haxe.ds.StringMap;
import lime.app.Future;
import lime.utils.AssetType;
import openfl.display.BitmapData;

class Paths {
	private static final _cacheMap:StringMap<FlxGraphicAsset> = new StringMap();

	public static function getCachedAsset(key:String):Null<FlxGraphicAsset> {
		if (!_cacheMap.exists(key))
			return null;
		return _cacheMap.get(key);
	}

	public static function cacheAsset(key:String, spr:FlxGraphicAsset) {
		_cacheMap.set(key, spr);
		return spr;
	}

	inline public static function image(path:String):FlxGraphicAsset {
		var v = getCachedAsset('images/$path') ?? getPath('images/$path.png', IMAGE);
		_cacheMap.set('images/$path', v);
		return v;
	}

	inline static function getPath(path:String, type:AssetType) {
		return 'assets/$path';
	}
}

class RequestData {
	public static function image(url:String):Future<FlxGraphicAsset> {
		@:privateAccess
		if (Paths._cacheMap.exists(url))
			return Future.withValue(Paths.getCachedAsset(url));
		return BitmapData.loadFromFile(url).then(data -> return Future.withValue(Paths.cacheAsset(url, data)));
	}
}
