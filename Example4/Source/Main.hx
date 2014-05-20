import flash.display.Bitmap;
import flash.display.Sprite;

import openfl.Assets;

import motion.Actuate;

class Main extends Sprite {
    public function new () {
        super ();

        var bitmapData = Assets.getBitmapData ("assets/flower.jpg");
        var bitmap = new Bitmap (bitmapData);
        addChild (bitmap);

        bitmap.x = 100;
        bitmap.y = 200;

		Actuate.tween (bitmap, 3, { alpha:0.2 }).onComplete (complete);
    }
    
    private function complete ():Void {
    	trace ("Hello World!");
 	}
}