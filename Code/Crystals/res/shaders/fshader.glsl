#define SHADER_NORMAL 0
#define SHADER_BACKGROUND 1
#define SHADER_HBLUR 2
#define SHADER_VBLUR 3
#define SHADER_FINAL 4
#define SHADER_BLUR_RECT 5
#define SHADER_DRAW_BLUR 6
#define SHADER_TITLEBAR 7


uniform highp vec2 textureSize;
uniform sampler2D Texture;
uniform lowp int Mode;
uniform lowp int viewOpacity;
uniform highp vec2 viewSize;

precision mediump float;
precision mediump int;

varying highp vec4 finalColor;
varying highp vec2 texCoordsOut;
varying highp vec2 blurTextureCoords[11];


float borderRadiusOpacity(bool topLeft, bool topRight, bool bottomRight, bool bottomLeft)
{
    highp float  xPix = viewSize.x * texCoordsOut.x;
    highp float  yPix = texCoordsOut.y * viewSize.y;
    highp float radius = 8.0;

    // Top Left
    if( xPix <= radius && yPix  <= radius )
    {
        if(topLeft)
            return 1.0 - pow(sqrt(pow(radius -xPix,2.0) + pow(radius - yPix, 2.0))/radius,radius);
    }
    // Top Right
    else if( xPix >= viewSize.x - radius && yPix <= radius )
    {
        if(topRight)
            return 1.0 - pow(sqrt(pow(radius -viewSize.x + xPix,2.0) + pow(radius - yPix, 2.0))/radius,radius);
    }
    // Bottom Right
    else if( xPix >= viewSize.x - radius && yPix  >= viewSize.y - radius )
    {
        if(bottomRight)
            return 1.0 - pow(sqrt(pow(radius - viewSize.x + xPix,2.0) + pow(radius - viewSize.y + yPix, 2.0))/radius,radius);
    }
    // Bottom Left
    else if( xPix <= radius && yPix  >= viewSize.y - radius )
    {
        if(bottomLeft)
            return 1.0 - pow(sqrt(pow(radius -xPix,2.0) + pow(radius - viewSize.y + yPix, 2.0))/radius,radius);
    }

    if( xPix <= radius)
        return 1.0 - pow((radius - xPix)/radius,radius);
    else if( yPix <= radius && (topLeft || topRight))
        return 1.0 - pow((radius - yPix)/radius,radius);
    else if( xPix >= viewSize.x - radius)
        return 1.0 - pow((radius - viewSize.x + xPix)/radius,radius);
    else if( yPix >= viewSize.y - radius && (bottomLeft || bottomRight))
        return 1.0 - pow((radius - viewSize.y + yPix)/radius,radius);
    else
        return 1.0;

}

void blur()
{
    vec4 sum = vec4(0.0);
    sum += texture2D(Texture, blurTextureCoords[0]) * 0.0093f;
    sum += texture2D(Texture, blurTextureCoords[1]) * 0.028002f;
    sum += texture2D(Texture, blurTextureCoords[2]) * 0.065984f;
    sum += texture2D(Texture, blurTextureCoords[3]) * 0.121703f;
    sum += texture2D(Texture, blurTextureCoords[4]) * 0.175713f;
    sum += texture2D(Texture, blurTextureCoords[5]) * 0.198596f;
    sum += texture2D(Texture, blurTextureCoords[6]) * 0.175713f;
    sum += texture2D(Texture, blurTextureCoords[7]) * 0.121703f;
    sum += texture2D(Texture, blurTextureCoords[8]) * 0.065984f;
    sum += texture2D(Texture, blurTextureCoords[9]) * 0.028002f;
    sum += texture2D(Texture, blurTextureCoords[10]) * 0.0093f;

    sum = sum*1.03f ;
    sum.a = 1.0;

    gl_FragColor = sum;
}

void clientView()
{
    vec4 color = finalColor;
    color.a = color.a * (float(viewOpacity) / 255.0);
    gl_FragColor =  texture2D(Texture,texCoordsOut)*color*vec4(1.0,1.0,1.0,borderRadiusOpacity(false,false,true,true));
}

void finalView()
{
    gl_FragColor = texture2D(Texture, texCoordsOut);
}

void blurRect()
{
    gl_FragColor = texture2D(Texture, texCoordsOut);
}

void finalBlur()
{
    vec4 px = texture2D(Texture,texCoordsOut);
    px = px*0.5 + vec4(0.55);
    px.a = 1.0;


    gl_FragColor =  (px)*finalColor*vec4(1.0,1.0,1.0,borderRadiusOpacity(false,false,true,true));
}

void background()
{
    gl_FragColor =  texture2D(Texture,texCoordsOut)*finalColor;
}

void titleBar()
{
    gl_FragColor =  texture2D(Texture,texCoordsOut)*vec4(1.0,1.0,1.0,borderRadiusOpacity(true,true,false,false));
}

void main(void)
{
                 if ( Mode == 0 ) clientView();
        else if ( Mode == 1 ) background();
        else if ( Mode == 2 ) blur();
        else if ( Mode == 3 ) blur();
        else if ( Mode == 4 ) finalView();
        else if ( Mode == 5 ) blurRect();
        else if ( Mode == 6 ) finalBlur();
        else if ( Mode == 7 ) titleBar();
}
