package assets.shaders;

import flixel.system.FlxAssets.FlxShader;
import flixel.FlxG;

class SkewVertex {
    public var shader:SkewVertexShader;

    public function new() {
        this.shader = new SkewVertexShader();
    }

    public function update(elapsed:Float) {
        @:privateAccess
        shader.update(elapsed);
    }
}

class SkewVertexShader extends FlxShader {
    @:glVertexBody("
	// start of default code required for alpha and color to work 
	openfl_Alphav = openfl_Alpha;
	openfl_TextureCoordv = openfl_TextureCoord;
	
	mat4  transform = openfl_Matrix * mat4(
		vec4( tX.x, tX.y, tX.z, 0.0 ),
		vec4( tY.x, tY.y, tY.z, 0.0 ),
		vec4( tZ.x, tZ.y, tZ.z, 0.0 ),
		vec4( tT.x, tT.y, tT.z, 1.0 ));
		
	//gl_Position = transform * openfl_Position;
	")
    @glVertexSource('
        #pragma header

        uniform vec2 flixel_ScreenSize;
        
        uniform vec2 mouse_screen_pos;
        uniform float hovering;
        uniform float screen_scale;

	    uniform vec3 tX;
	    uniform vec3 tY;
	    uniform vec3 tZ;
	    uniform vec3 tT;

        out float output;

        vec4 position( mat4 transform_projection, vec4 vertex_position) {
            if (hovering <= 0.) {
                return transform_projection * vertex_position;
            }
            float mid_dist = length(vertex_position.xy - 0.5*openfl_TextureSize.xy)/length(openfl_TextureSize.xy);
            vec2 mouse_offset = (vertex_position.xy - mouse_screen_pos.xy)/screen_scale;
            float scale = 0.2*(-0.03 - 0.3*max(0., 0.3-mid_dist)
                            *hovering*(length(mouse_offset)*length(mouse_offset))/(2. -mid_dist);

            output = scale;

            return transform_projection * vertex_position + vec4(0,0,0,scale);
        }

        void main() {
            #pragma body
            openfl_Alphav = openfl_Alphav * alpha;

            gl_Position = position(transform, openfl_Position);
        }
    ')
    public function new() {
        super();

        flixel_ScreenSize.value = [FlxG.width, FlxG.height];
        mouse_screen_pos.value = [FlxG.mouse.x, FlxG.mouse.y];
        hovering.value = [0];
        screen_scale.value = [1];

		tX.value = [1.0, 0.0, 0.0];
		tY.value = [0.0, 1.0, 0.0];
		tZ.value = [0.0, 0.0, 0.0];
		tT.value = [0.0, 0.0, 1.0];
    }

    private function update(elapsed:Float) {
        mouse_screen_pos.value = [FlxG.mouse.screenX, FlxG.mouse.screenY];
        #if debug
        trace('Updating shader! ${mouse_screen_pos.value}, ${output.value}');
        #end
    }
}