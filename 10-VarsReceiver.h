// Numericise the State of the Channels:
uint8_t CH3_Value;
uint8_t CH4_Value;
uint8_t CH5_Value;

// Last State of Channel
int8_t CH3_Last;
int8_t CH4_Last;
int8_t CH5_Last;

// Thresholds to Trigger LEDs:
// Reads 1997-1998
const int OnLowerTrigger	= 1950;
const int OnUpperTrigger	= 2050;
// Reads 998-999
const int OffLowerTrigger	= 950;
const int OffUpperTrigger	= 1050;
// Ignore Value
const int IgnoreTrigger		= 100;
// PWM Timeout
int PWMTimeout				= 15000;

// Define LED Values
/*-----Channel Values------------------------------------------
CH5 requires CH4, CH5 uses value of 4 for math purposes only to match the table below.
Value	Channels			Result								Notes/Variable
0		None				None								LED_Off - LEDs Off
1		CH3					Underbody - Green					LED_Und - Underbody
2		CH4					Police Font/Rear					LED_Pol - Police
3		CH3 & CH4			Police Underbody & Front/Rear		LED_FPol - Full Police
4		CH5					None								Can't be triggered, CH5 requires CH4 on.
5		CH3 & CH5			None								Can't be triggered, CH5 requires CH4 on.
6		CH4 & CH5			Utility Front/Rear					LED_Uti - Utility
7		CH3 & CH4 & CH5		Utility Underbody & Front/Rear		LED_FUti - Full Utility
-----Channel Values------------------------------------------*/
const uint8_t LED_Off	= 0;
const uint8_t LED_Und	= 1;
const uint8_t LED_Pol	= 2;
const uint8_t LED_FPol	= 3;
//const uint8_t LED_NA	= 4;
//const uint8_t LED_NA	= 5;
const uint8_t LED_Uti	= 6;
const uint8_t LED_FUti	= 7;