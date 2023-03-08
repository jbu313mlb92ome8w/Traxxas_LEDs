//-----LED Grill-----------------------------------------------

// Side to Side Fade
const uint8_t GrillBPM	= 255 / 2;
const uint8_t GrillFade = 255 / 2;

// 1 Group Split = 12 LEDs
const uint8_t LEDs_Grill_1GS	= 1; // Change for Split
const uint8_t LEDs_Grill_1G		= LED_Grill_LEDs / LEDs_Grill_1GS;
const uint8_t LEDs_Grill_1G1S	= 0;
const uint8_t LEDs_Grill_1G1E	= LEDs_Grill_1G1S + LEDs_Grill_1G - 1;

// 2 Group Split = 6 LEDs
const uint8_t LEDs_Grill_2GS	= 2; // Change for Split
const uint8_t LEDs_Grill_2G		= LED_Grill_LEDs / LEDs_Grill_2GS;
const uint8_t LEDs_Grill_2G1S	= 0;
const uint8_t LEDs_Grill_2G1E	= LEDs_Grill_2G1S + LEDs_Grill_2G - 1;
const uint8_t LEDs_Grill_2G2S	= LEDs_Grill_2G1E + 1;
const uint8_t LEDs_Grill_2G2E	= LEDs_Grill_2G2S + LEDs_Grill_2G - 1;

// 3 Group Split = 4 LEDs
const uint8_t LEDs_Grill_3GS	= 3; // Change for Split
const uint8_t LEDs_Grill_3G		= LED_Grill_LEDs / LEDs_Grill_3GS;
const uint8_t LEDs_Grill_3G1S	= 0;
const uint8_t LEDs_Grill_3G1E	= LEDs_Grill_3G1S + LEDs_Grill_3G - 1;
const uint8_t LEDs_Grill_3G2S	= LEDs_Grill_3G1E + 1;
const uint8_t LEDs_Grill_3G2E	= LEDs_Grill_3G2S + LEDs_Grill_3G - 1;
const uint8_t LEDs_Grill_3G3S	= LEDs_Grill_3G2E + 1;
const uint8_t LEDs_Grill_3G3E	= LEDs_Grill_3G3S + LEDs_Grill_3G - 1;

// 4 Group Split = 3 LEDs
const uint8_t LEDs_Grill_4GS	= 4; // Change for Split
const uint8_t LEDs_Grill_4G		= LED_Grill_LEDs / LEDs_Grill_4GS;
const uint8_t LEDs_Grill_4G1S	= 0;
const uint8_t LEDs_Grill_4G1E	= LEDs_Grill_4G1S + LEDs_Grill_4G - 1;
const uint8_t LEDs_Grill_4G2S	= LEDs_Grill_4G1E + 1;
const uint8_t LEDs_Grill_4G2E	= LEDs_Grill_4G2S + LEDs_Grill_4G - 1;
const uint8_t LEDs_Grill_4G3S	= LEDs_Grill_4G2E + 1;
const uint8_t LEDs_Grill_4G3E	= LEDs_Grill_4G3S + LEDs_Grill_4G - 1;
const uint8_t LEDs_Grill_4G4S	= LEDs_Grill_4G3E + 1;
const uint8_t LEDs_Grill_4G4E	= LEDs_Grill_4G4S + LEDs_Grill_4G - 1;

// 6 Group Split = 2 LEDs
const uint8_t LEDs_Grill_6GS	= 6; // Change for Split
const uint8_t LEDs_Grill_6G		= LED_Grill_LEDs / LEDs_Grill_6GS;
const uint8_t LEDs_Grill_6G1S	= 0;
const uint8_t LEDs_Grill_6G1E	= LEDs_Grill_6G1S + LEDs_Grill_6G - 1;
const uint8_t LEDs_Grill_6G2S	= LEDs_Grill_6G1E + 1;
const uint8_t LEDs_Grill_6G2E	= LEDs_Grill_6G2S + LEDs_Grill_6G - 1;
const uint8_t LEDs_Grill_6G3S	= LEDs_Grill_6G2E + 1;
const uint8_t LEDs_Grill_6G3E	= LEDs_Grill_6G3S + LEDs_Grill_6G - 1;
const uint8_t LEDs_Grill_6G4S	= LEDs_Grill_6G3E + 1;
const uint8_t LEDs_Grill_6G4E	= LEDs_Grill_6G4S + LEDs_Grill_6G - 1;
const uint8_t LEDs_Grill_6G5S	= LEDs_Grill_6G4E + 1;
const uint8_t LEDs_Grill_6G5E	= LEDs_Grill_6G5S + LEDs_Grill_6G - 1;
const uint8_t LEDs_Grill_6G6S	= LEDs_Grill_6G5E + 1;
const uint8_t LEDs_Grill_6G6E	= LEDs_Grill_6G6S + LEDs_Grill_6G - 1;

//-----LED Grill-----------------------------------------------