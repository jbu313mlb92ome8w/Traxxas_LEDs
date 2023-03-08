void LEDsFullPolice(){//----CH3 & CH4 (3)----

//----Change Memory Address!----
	uint8_t BrightnessMem = EEPROM.read(MemoryAddressFPol);
//----Change Memory Address!----
	//Serial.print("BrightnessMem: ");
	//Serial.println(BrightnessMem);

//-----Brightness Level----------------------------------------
	switch(BrightnessMem){
		case(0xFF):
			FastLED.setBrightness(Bright100);
			//Serial.println("LEDBrightness: Bright100");
			break;
		case(DipB0):
			FastLED.setBrightness(Bright0);
			//Serial.println("LEDBrightness: Bright0");
			break;
		case(DipB35):
			FastLED.setBrightness(Bright35);
			//Serial.println("LEDBrightness: Bright35");
			break;
		case(DipB50):
			FastLED.setBrightness(Bright50);
			//Serial.println("LEDBrightness: Bright50");
			break;
		case(DipB62):
			FastLED.setBrightness(Bright62);
			//Serial.println("LEDBrightness: Bright62");
			break;
		case(DipB75):
			FastLED.setBrightness(Bright75);
			//Serial.println("LEDBrightness: Bright75");
			break;
		case(DipB85):
			FastLED.setBrightness(Bright85);
			//Serial.println("LEDBrightness: Bright85");
			break;
		case(DipB100):
			FastLED.setBrightness(Bright100);
			//Serial.println("LEDBrightness: Bright100");
			break;
	}
//FastLED.setBrightness(255);
//-----Brightness Level----------------------------------------

// Red on Left

	// Constant
		// Under
		//----
		// Front
		LEDs_Front(LEDs_Front_5G1S, LEDs_Front_5G1E).fill_solid(ColorWhite);
		LEDs_Front(LEDs_Front_5G5S, LEDs_Front_5G5E).fill_solid(ColorWhite);
		// Grill
		//----
		// Rear
		//----
	//Constant

	// Pulse 1
		// Under
		uint8_t UnderBeatU1 = beatsin8(UnderBPM, LEDs_Under_4G1S, LEDs_Under_4G1E, 0, 0);
		uint8_t UnderBeatU2 = beatsin8(UnderBPM, LEDs_Under_4G1S, LEDs_Under_4G1E, 0, 255 / 2);
		uint8_t UnderBeatU3 = beatsin8(UnderBPM, LEDs_Under_4G2S, LEDs_Under_4G2E, 0, 0);
		uint8_t UnderBeatU4 = beatsin8(UnderBPM, LEDs_Under_4G2S, LEDs_Under_4G2E, 0, 255 / 2);
		uint8_t UnderBeatU5 = beatsin8(UnderBPM, LEDs_Under_4G3S, LEDs_Under_4G3E, 0, 0);
		uint8_t UnderBeatU6 = beatsin8(UnderBPM, LEDs_Under_4G3S, LEDs_Under_4G3E, 0, 255 / 2);
		uint8_t UnderBeatU7 = beatsin8(UnderBPM, LEDs_Under_4G4S, LEDs_Under_4G4E, 0, 0);
		uint8_t UnderBeatU8 = beatsin8(UnderBPM, LEDs_Under_4G4S, LEDs_Under_4G4E, 0, 255 / 2);
		LEDs_Under[UnderBeatU1] = PoliceColor1;
		LEDs_Under[UnderBeatU2] = PoliceColor2;
		LEDs_Under[UnderBeatU3] = PoliceColor1;
		LEDs_Under[UnderBeatU4] = PoliceColor2;
		LEDs_Under[UnderBeatU5] = PoliceColor1;
		LEDs_Under[UnderBeatU6] = PoliceColor2;
		LEDs_Under[UnderBeatU7] = PoliceColor1;
		LEDs_Under[UnderBeatU8] = PoliceColor2;
		fadeToBlackBy(LEDs_Under, LED_Under_LEDs, UnderFade);
		// Front
		uint8_t FrontBeatF1 = beatsin8(FrontBPM, LEDs_Front_5G2S, LEDs_Front_2G1E, 0, 0);
		uint8_t FrontBeatF2 = beatsin8(FrontBPM, LEDs_Front_5G2S, LEDs_Front_2G1E, 0, 255 / 2);
		uint8_t FrontBeatF3 = beatsin8(FrontBPM, LEDs_Front_2G2S, LEDs_Front_5G4E, 0, 0);
		uint8_t FrontBeatF4 = beatsin8(FrontBPM, LEDs_Front_2G2S, LEDs_Front_5G4E, 0, 255 / 2);
		LEDs_Front[FrontBeatF1] = PoliceColor1;
		LEDs_Front[FrontBeatF2] = PoliceColor2;
		LEDs_Front[FrontBeatF3] = PoliceColor1;
		LEDs_Front[FrontBeatF4] = PoliceColor2;
		fadeToBlackBy(LEDs_Front, LED_Front_LEDs, FrontFade);
		// Grill
		uint8_t GrillBeatG1 = beatsin8(GrillBPM, LEDs_Grill_2G1S, LEDs_Grill_2G1E, 0, 0);
		uint8_t GrillBeatG2 = beatsin8(GrillBPM, LEDs_Grill_2G1S, LEDs_Grill_2G1E, 0, 255 / 2);
		uint8_t GrillBeatG3 = beatsin8(GrillBPM, LEDs_Grill_2G2S, LEDs_Grill_2G2E, 0, 0);
		uint8_t GrillBeatG4 = beatsin8(GrillBPM, LEDs_Grill_2G2S, LEDs_Grill_2G2E, 0, 255 / 2);
		LEDs_Grill[GrillBeatG1] = PoliceColor1;
		LEDs_Grill[GrillBeatG2] = PoliceColor2;
		LEDs_Grill[GrillBeatG3] = PoliceColor1;
		LEDs_Grill[GrillBeatG4] = PoliceColor2;
		fadeToBlackBy(LEDs_Grill, LED_Grill_LEDs, GrillFade);
		// Rear
		uint8_t RearBeatF1 = beatsin8(RearBPM, LEDs_Rear_2G1S, LEDs_Rear_2G1E, 0, 0);
		uint8_t RearBeatF2 = beatsin8(RearBPM, LEDs_Rear_2G1S, LEDs_Rear_2G1E, 0, 255 / 2);
		uint8_t RearBeatF3 = beatsin8(RearBPM, LEDs_Rear_2G2S, LEDs_Rear_2G2E, 0, 0);
		uint8_t RearBeatF4 = beatsin8(RearBPM, LEDs_Rear_2G2S, LEDs_Rear_2G2E, 0, 255 / 2);
		LEDs_Rear[RearBeatF1] = PoliceColor1;
		LEDs_Rear[RearBeatF2] = PoliceColor2;
		LEDs_Rear[RearBeatF3] = PoliceColor1;
		LEDs_Rear[RearBeatF4] = PoliceColor2;
		fadeToBlackBy(LEDs_Rear, LED_Rear_LEDs, RearFade);
		// Display
		FastLED.show();
	// Pulse 1

	// Pulse 2
		// Under
		//----
		// Front
		//----
		// Grill
		//----
		// Rear
		//----
		// Display
		//FastLED.show();
	// Pulse 2
	
	//Serial.println("Pattern: Full Police");
}//----CH3 & CH4 (3)----
