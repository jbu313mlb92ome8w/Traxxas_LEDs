// Define Windshield
/*-----Windshield Dip Values-------------------------------------
0	Off
1	On
-----Windshield Dip Values-------------------------------------*/
const uint8_t DipWOff	= 0;
const uint8_t DipWOn	= 1;

// Define Underbody Colors
/*-----Underbody Color Dip Values-------------------------------
000		Black
001		White
010		Green
011		Blue
100		Red
101		Orange
111		Purple
-----Underbody Color Dip Values------------------------------*/
const uint8_t DipUBlack		= 0;
const uint8_t DipUWhite		= 1;
const uint8_t DipUGreen		= 2;
const uint8_t DipUBlue		= 3;
const uint8_t DipURed		= 4;
const uint8_t DipUOrange	= 5;
const uint8_t DipUOrangeRed	= 6;
const uint8_t DipUPurple	= 7;

// Define Red/Blue Color
/*-----Red/Blue Dip Values-------------------------------------
0	Red
1	Blue
-----Red/Blue Dip Values-------------------------------------*/
const uint8_t DipPRed	= 0;
const uint8_t DipPBlue	= 1;

// Define Brightness
/*-----Brightness Dip Values-----------------------------------
000		Deactivated
001		0
010		35
011		50
100		62
101		75
110		85
111		100
-----Brightness Dip Values-----------------------------------*/
const uint8_t DipBD			= 0;
const uint8_t DipB0			= 1;
const uint8_t DipB35		= 2;
const uint8_t DipB50		= 3;
const uint8_t DipB62		= 4;
const uint8_t DipB75		= 5;
const uint8_t DipB85		= 6;
const uint8_t DipB100		= 7;

// Brightness
const uint8_t Bright0	(255*.0);
const uint8_t Bright35	(255*.35);
const uint8_t Bright50	(255*.50);
const uint8_t Bright62	(255*.62);
const uint8_t Bright75	(255*.75);
const uint8_t Bright85	(255*.85);
const uint8_t Bright100	(255*1);

uint8_t LEDBrightness;

// Dip Variable
int DipRedBlueColorValue		= 0;
int DipUnderbodyWindshieldValue	= 0;
int DipUnderbodyColorValue		= 0;
int DipBrightnessValue			= 0;