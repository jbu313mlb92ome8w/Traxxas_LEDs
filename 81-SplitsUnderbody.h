//-----LED Under-----------------------------------------------

// Side to Side Fade
const uint8_t UnderBPM	= 255 / 2.5;
const uint8_t UnderFade = 255 / 15;

// 1 Group Split = 28 LEDs
const uint8_t LEDs_Under_1GS	= 1; // Change for Split
const uint8_t LEDs_Under_1G		= LED_Under_LEDs / LEDs_Under_1GS;
const uint8_t LEDs_Under_1G1S	= 0;
const uint8_t LEDs_Under_1G1E	= LEDs_Under_1G1S + LEDs_Under_1G - 1;

// 2 Group Split = 14 LEDs
const uint8_t LEDs_Under_2GS	= 2; // Change for Split
const uint8_t LEDs_Under_2G		= LED_Under_LEDs / LEDs_Under_2GS;
const uint8_t LEDs_Under_2G1S	= 0;
const uint8_t LEDs_Under_2G1E	= LEDs_Under_2G1S + LEDs_Under_2G - 1;
const uint8_t LEDs_Under_2G2S	= LEDs_Under_2G1E + 1;
const uint8_t LEDs_Under_2G2E	= LEDs_Under_2G2S + LEDs_Under_2G - 1;

// 4 Group Split = 7 LEDs
const uint8_t LEDs_Under_4GS	= 4; // Change for Split
const uint8_t LEDs_Under_4G		= LED_Under_LEDs / LEDs_Under_4GS;
const uint8_t LEDs_Under_4G1S	= 0;
const uint8_t LEDs_Under_4G1E	= LEDs_Under_4G1S + LEDs_Under_4G - 1;
const uint8_t LEDs_Under_4G2S	= LEDs_Under_4G1E + 1;
const uint8_t LEDs_Under_4G2E	= LEDs_Under_4G2S + LEDs_Under_4G - 1;
const uint8_t LEDs_Under_4G3S	= LEDs_Under_4G2E + 1;
const uint8_t LEDs_Under_4G3E	= LEDs_Under_4G3S + LEDs_Under_4G - 1;
const uint8_t LEDs_Under_4G4S	= LEDs_Under_4G3E + 1;
const uint8_t LEDs_Under_4G4E	= LEDs_Under_4G4S + LEDs_Under_4G - 1;

// 7 Group Split = 4 LEDs
const uint8_t LEDs_Under_5GS	= 7; // Change for Split
const uint8_t LEDs_Under_5G		= LED_Under_LEDs / LEDs_Under_5GS;
const uint8_t LEDs_Under_5G1S	= 0;
const uint8_t LEDs_Under_5G1E	= LEDs_Under_5G1S + LEDs_Under_5G - 1;
const uint8_t LEDs_Under_5G2S	= LEDs_Under_5G1E + 1;
const uint8_t LEDs_Under_5G2E	= LEDs_Under_5G2S + LEDs_Under_5G - 1;
const uint8_t LEDs_Under_5G3S	= LEDs_Under_5G2E + 1;
const uint8_t LEDs_Under_5G3E	= LEDs_Under_5G3S + LEDs_Under_5G - 1;
const uint8_t LEDs_Under_5G4S	= LEDs_Under_5G3E + 1;
const uint8_t LEDs_Under_5G4E	= LEDs_Under_5G4S + LEDs_Under_5G - 1;
const uint8_t LEDs_Under_5G5S	= LEDs_Under_5G4E + 1;
const uint8_t LEDs_Under_5G5E	= LEDs_Under_5G5S + LEDs_Under_5G - 1;
const uint8_t LEDs_Under_5G6S	= LEDs_Under_5G5E + 1;
const uint8_t LEDs_Under_5G6E	= LEDs_Under_5G6S + LEDs_Under_5G - 1;
const uint8_t LEDs_Under_5G7S	= LEDs_Under_5G6E + 1;
const uint8_t LEDs_Under_5G7E	= LEDs_Under_5G7S + LEDs_Under_5G - 1;

//-----LED Under-----------------------------------------------