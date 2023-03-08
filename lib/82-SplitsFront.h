//-----LED Front-----------------------------------------------

// Side to Side Fade
const uint8_t FrontBPM	= 255 / 2;
const uint8_t FrontFade = 255 / 8;

// 1 Group Split = 20 LEDs
const uint8_t LEDs_Front_1GS	= 1; // Change for Split
const uint8_t LEDs_Front_1G		= LED_Front_LEDs / LEDs_Front_1GS;
const uint8_t LEDs_Front_1G1S	= 0;
const uint8_t LEDs_Front_1G1E	= LEDs_Front_1G1S + LEDs_Front_1G - 1;

// 2 Group Split = 10 LEDs
const uint8_t LEDs_Front_2GS	= 2; // Change for Split
const uint8_t LEDs_Front_2G		= LED_Front_LEDs / LEDs_Front_2GS;
const uint8_t LEDs_Front_2G1S	= 0;
const uint8_t LEDs_Front_2G1E	= LEDs_Front_2G1S + LEDs_Front_2G - 1;
const uint8_t LEDs_Front_2G2S	= LEDs_Front_2G1E + 1;
const uint8_t LEDs_Front_2G2E	= LEDs_Front_2G2S + LEDs_Front_2G - 1;

// 4 Group Split = 5 LEDs
const uint8_t LEDs_Front_4GS	= 4; // Change for Split
const uint8_t LEDs_Front_4G		= LED_Front_LEDs / LEDs_Front_4GS;
const uint8_t LEDs_Front_4G1S	= 0;
const uint8_t LEDs_Front_4G1E	= LEDs_Front_4G1S + LEDs_Front_4G - 1;
const uint8_t LEDs_Front_4G2S	= LEDs_Front_4G1E + 1;
const uint8_t LEDs_Front_4G2E	= LEDs_Front_4G2S + LEDs_Front_4G - 1;
const uint8_t LEDs_Front_4G3S	= LEDs_Front_4G2E + 1;
const uint8_t LEDs_Front_4G3E	= LEDs_Front_4G3S + LEDs_Front_4G - 1;
const uint8_t LEDs_Front_4G4S	= LEDs_Front_4G3E + 1;
const uint8_t LEDs_Front_4G4E	= LEDs_Front_4G4S + LEDs_Front_4G - 1;

// 5 Group Split = 4 LEDs
const uint8_t LEDs_Front_5GS	= 5; // Change for Split
const uint8_t LEDs_Front_5G		= LED_Front_LEDs / LEDs_Front_5GS;
const uint8_t LEDs_Front_5G1S	= 0;
const uint8_t LEDs_Front_5G1E	= LEDs_Front_5G1S + LEDs_Front_5G - 1;
const uint8_t LEDs_Front_5G2S	= LEDs_Front_5G1E + 1;
const uint8_t LEDs_Front_5G2E	= LEDs_Front_5G2S + LEDs_Front_5G - 1;
const uint8_t LEDs_Front_5G3S	= LEDs_Front_5G2E + 1;
const uint8_t LEDs_Front_5G3E	= LEDs_Front_5G3S + LEDs_Front_5G - 1;
const uint8_t LEDs_Front_5G4S	= LEDs_Front_5G3E + 1;
const uint8_t LEDs_Front_5G4E	= LEDs_Front_5G4S + LEDs_Front_5G - 1;
const uint8_t LEDs_Front_5G5S	= LEDs_Front_5G4E + 1;
const uint8_t LEDs_Front_5G5E	= LEDs_Front_5G5S + LEDs_Front_5G - 1;

// 10 Group Split = 2 LEDs
const uint8_t LEDs_Front_10GS	= 10; // Change for Split
const uint8_t LEDs_Front_10G	= LED_Front_LEDs / LEDs_Front_10GS;
const uint8_t LEDs_Front_10G1S	= 0;
const uint8_t LEDs_Front_10G1E	= LEDs_Front_10G1S + LEDs_Front_10G - 1;
const uint8_t LEDs_Front_10G2S	= LEDs_Front_10G1E + 1;
const uint8_t LEDs_Front_10G2E	= LEDs_Front_10G2S + LEDs_Front_10G - 1;
const uint8_t LEDs_Front_10G3S	= LEDs_Front_10G2E + 1;
const uint8_t LEDs_Front_10G3E	= LEDs_Front_10G3S + LEDs_Front_10G - 1;
const uint8_t LEDs_Front_10G4S	= LEDs_Front_10G3E + 1;
const uint8_t LEDs_Front_10G4E	= LEDs_Front_10G4S + LEDs_Front_10G - 1;
const uint8_t LEDs_Front_10G5S	= LEDs_Front_10G4E + 1;
const uint8_t LEDs_Front_10G5E	= LEDs_Front_10G5S + LEDs_Front_10G - 1;
const uint8_t LEDs_Front_10G6S	= LEDs_Front_10G5E + 1;
const uint8_t LEDs_Front_10G6E	= LEDs_Front_10G6S + LEDs_Front_10G - 1;
const uint8_t LEDs_Front_10G7S	= LEDs_Front_10G6E + 1;
const uint8_t LEDs_Front_10G7E	= LEDs_Front_10G7S + LEDs_Front_10G - 1;
const uint8_t LEDs_Front_10G8S	= LEDs_Front_10G7E + 1;
const uint8_t LEDs_Front_10G8E	= LEDs_Front_10G8S + LEDs_Front_10G - 1;
const uint8_t LEDs_Front_10G9S	= LEDs_Front_10G8E + 1;
const uint8_t LEDs_Front_10G9E	= LEDs_Front_10G9S + LEDs_Front_10G - 1;
const uint8_t LEDs_Front_10G10S	= LEDs_Front_10G9E + 1;
const uint8_t LEDs_Front_10G10E	= LEDs_Front_10G10S + LEDs_Front_10G - 1;

//-----LED Front-----------------------------------------------