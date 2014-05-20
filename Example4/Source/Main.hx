import flash.display.Bitmap;
import flash.display.Sprite;
import flash.events.MouseEvent;

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

		bitmap.addEventListener(MouseEvent.CLICK, onClick);
		Actuate.tween (bitmap, 3, { alpha:0.2 }).onComplete (complete);
    }

    private function complete ():Void {
    	trace ("Hello World!");
 	}

	public function onClick(e:MouseEvent):Void {
    	trace("I've been hit!");
	}
 	
}