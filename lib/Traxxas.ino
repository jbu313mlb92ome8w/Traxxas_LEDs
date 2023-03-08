// Libraries
#include <Arduino.h>
#include <EEPROM.h>
//#include <TeensyThreads.h>
#include <FastLED.h>
#include <Bounce.h>

/*
// Used to check RAM availability. Usage: Serial.println(FreeRam());
int FreeRam (){
	extern int __heap_start, *__brkval;
	int v;
	return (int) &v - (__brkval == 0 ? (int) &__heap_start : (int) __brkval);
}
*/

//-----Pins----------------------------------------------------
#define BuiltInLED				13
// Dip Pins
#define DipUnderbodyWindshield	2
#define DipUnderbodyColor1		3
#define DipUnderbodyColor2		4
#define DipUnderbodyColor3		5
#define DipRedBlue				6
#define DipBrightness1			7
#define DipBrightness2			8
#define DipBrightness3			9
// LED Pins
#define LED_Under_Pin			20
#define LED_Front_Pin			21
#define LED_Grill_Pin			22
#define LED_Rear_Pin			23
// Receiver
#define CH3						14
#define CH4						15
#define CH5						16
//-----Pins----------------------------------------------------

//-----LED-----------------------------------------------------
// LED Strip
#define Chipset 		WS2812B
#define Order 			GRB
// Underbody LEDs - Left/Right use same count and data pin is split to Left/Right
#define LED_Under_LEDs	28 // All Lit, [0-27].
// Front LEDs
#define LED_Front_LEDs	20 // All Lit, [0-19]. Windshield.
// Grill LEDs
#define LED_Grill_LEDs	12 // All Lit, [0-11]. Grill.
// Rear LEDs
//#define LED_Rear_LEDs	16 // All Lit, [0-15]. Rear window.
#define LED_Rear_LEDs	20 // All Lit, [0-23]. Tailgate.
//-----LED-----------------------------------------------------

//-----Button--------------------------------------------------
const uint8_t ButtonBrightness		= 0; // Interrupt
Bounce ButtonBrightnessBounce		= Bounce(ButtonBrightness, 500);
bool UpdateBrightness;
//-----Button--------------------------------------------------

//-----Memory--------------------------------------------------
const uint8_t MemoryAddressUnd	= 10;
const uint8_t MemoryAddressPol	= 20;
const uint8_t MemoryAddressFPol	= 30;
const uint8_t MemoryAddressUti	= 40;
const uint8_t MemoryAddressFUti	= 50;
//-----Memory--------------------------------------------------

//-----Files---------------------------------------------------
// Variables
#include "10-VarsReceiver.h"
#include "11-VarsLEDs.h"
#include "12-VarsDips.h"
// Functions
//#include "50-Brightness.h"
#include "51-Receiver.h"
// Splits
#include "81-SplitsUnderbody.h"
#include "82-SplitsFront.h"
#include "83-SplitsGrill.h"
#include "84-SplitsRear.h"
// Patterns
#include "90-LEDsOff.h"
#include "91-LEDsUnderbody.h"
#include "92-LEDsPolice.h"
#include "93-LEDsFullPolice.h"
#include "94-LEDsUtility.h"
#include "95-LEDsFullUtility.h"
//-----Files---------------------------------------------------

void setup(){

	// Initialize Serial Communication:
	Serial.begin(9600);
	Serial.println("On");
	//delay(3000);
	//Serial.print("RAM: ");
	//Serial.println(FreeRam());
	Serial.println("Booting");

	#include "20-SetPins.h"
	#include "21-SetDip.h"
	#include "22-SetLED.h"

	delay(1000);
	Serial.println("Ready");

	//LED_Value = 2;

}// End Setup

void loop(){

//	Serial.print("RAM: ");
//	Serial.println(FreeRam());
//	Serial.print("PreLoop UpdateBrightness: ");
//	Serial.println(UpdateBrightness);

	if(DipBrightnessValue != DipBD){
		if (ButtonBrightnessBounce.update()) {
			if (ButtonBrightnessBounce.fallingEdge()) {
				UpdateBrightness = true;
				Serial.println("UpdateBrightness");
			}
		}
	}
	
	Receiver();

//-----Start Call LED Functions----------------------------
	switch(LED_Value){// Determine Pattern
		//----No Channels (0)----
		
		///*
		
		case(LED_Off):
			UpdateBrightness = false;
			LEDsOff();
			break;
		//----CH3 Only (1)----
		case(LED_Und):
			if(UpdateBrightness == true){
				EEPROM.write(MemoryAddressUnd, DipBrightnessValue);
				delay(500);
				//Serial.print("EEPROM.read: ");
				//Serial.println(EEPROM.read(MemoryAddressUnd));
				UpdateBrightness = false;
			}
			LEDsUnderbody();
			break;
			
			//*/
			
		//----CH4 Only (2)----
		case(LED_Pol):
			if(UpdateBrightness == true){
				EEPROM.write(MemoryAddressPol, DipBrightnessValue);
				delay(500);
				//Serial.print("EEPROM.read: ");
				//Serial.println(EEPROM.read(MemoryAddressPol));
				UpdateBrightness = false;
			}
			LEDsPolice();
			break;
			
			///*
			
		//----CH3 & CH4 (3)----
		case(LED_FPol):
			if(UpdateBrightness == true){
				EEPROM.write(MemoryAddressFPol, DipBrightnessValue);
				delay(500);
				//Serial.print("EEPROM.read: ");
				//Serial.println(EEPROM.read(MemoryAddressFPol));
				UpdateBrightness = false;
			}
			LEDsFullPolice();
			break;
		//----CH4 & CH5 (6)----
		case(LED_Uti):
			if(UpdateBrightness == true){
				EEPROM.write(MemoryAddressUti, DipBrightnessValue);
				delay(500);
				//Serial.print("EEPROM.read: ");
				//Serial.println(EEPROM.read(MemoryAddressUti));
				UpdateBrightness = false;
			}
			LEDsUtility();
			break;
		//----CH3 & CH4 & CH5 (7)----
		case(LED_FUti):
			if(UpdateBrightness == true){
				EEPROM.write(MemoryAddressFUti, DipBrightnessValue);
				delay(500);
				//Serial.print("EEPROM.read: ");
				//Serial.println(EEPROM.read(MemoryAddressFUti);
				UpdateBrightness = false;
			}
			LEDsFullUtility();
			break;
			
			//*/
			
	}// Determine Pattern
//-----End Call LED Functions--------------------------
//	Serial.print("PostLoop UpdateBrightness: ");
//	Serial.println(UpdateBrightness);

}// End loop
