// LED Arrays
//CRGB LEDs_Under[LED_Under_LEDs];
//CRGB LEDs_Front[LED_Front_LEDs];
//CRGB LEDs_Rear[LED_Rear_LEDs];
CRGBArray<LED_Under_LEDs>	LEDs_Under;
CRGBArray<LED_Front_LEDs>	LEDs_Front;
CRGBArray<LED_Grill_LEDs>	LEDs_Grill;
CRGBArray<LED_Rear_LEDs>	LEDs_Rear;

// LED Value
uint8_t LED_Value;

// LED Color

/*
//https://stackoverflow.com/questions/65268135/arduino-pick-a-random-word-from-given-array

//unsigned long ColorArrayFull[]	= {0x000000, 0xFFDEAD, 0xFF0000, 0x0000FF};// "Black", "NavajoWhite", "Red", "Blue"
//unsigned long ColorArrayPartial[]	= {0x000000, 0xFF0000, 0x0000FF};// "Black", "Red", "Blue"
unsigned long ColorArrayFull[]		= {0xFFDEAD, 0xFF0000, 0x0000FF};// "Black", "NavajoWhite", "Red", "Blue"
unsigned long ColorArrayPartial[]	= {0xFF0000, 0x0000FF};// "Black", "Red", "Blue"
unsigned long ColorArrayRed[]		= {0x000000, 0xFF0000};// "Black", "Red"
unsigned long ColorArrayBlue[]		= {0x000000, 0x0000FF};// "Black", "Blue"

const int ColorArrayLenFull			= sizeof(ColorArrayFull) / sizeof(ColorArrayFull[0]);
const int ColorArrayLenPartial		= sizeof(ColorArrayPartial) / sizeof(ColorArrayPartial[0]);
const int ColorArrayLenRed			= sizeof(ColorArrayRed) / sizeof(ColorArrayRed[0]);
const int ColorArrayLenBlue			= sizeof(ColorArrayBlue) / sizeof(ColorArrayBlue[0]);

LEDs_Front[0]=ColorArrayRed[random8(ColorArrayLenRed)];
*/

//https://github.com/FastLED/FastLED/wiki/Pixel-reference
unsigned long ColorBlack		= 0x000000;
unsigned long ColorWhite		= 0xFFDEAD;
//unsigned long ColorWhite		= 0xF0FFFF;
//unsigned long ColorWhite		= 0xFFFAF0;
//unsigned long ColorWhite		= 0xF8F8FF;
unsigned long ColorRed			= 0xFF0000;
unsigned long ColorBlue			= 0x0000FF;
unsigned long ColorOrangeRed	= 0xFF4500;
unsigned long ColorYellow		= 0xB8860B;
unsigned long ColorGreen		= 0x008000;
//unsigned long ColorOrange		= 0xFFA500;
unsigned long ColorOrange		= 0xFF8C00;
unsigned long ColorPurple		= 0x8B008B;

// Underbody
unsigned long UnderbodyColor;
unsigned long WindshieldColor;

// Police
unsigned long PoliceColor1;
unsigned long PoliceColor2;