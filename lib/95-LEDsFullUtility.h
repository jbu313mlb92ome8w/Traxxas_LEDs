void LEDsFullUtility(){//----CH3 & CH4 & CH5 (7)----

//----Change Memory Address!----
	uint8_t BrightnessMem = EEPROM.read(MemoryAddressFUti);
//----Change Memory Address!----
	//Serial.print("BrightnessMem: ");
	//Serial.println(BrightnessMem);

//-----Brightness Level----------------------------------------
	switch(BrightnessMem){
//		case(0xFF):
//			FastLED.setBrightness(Bright100);
//			//Serial.println("LEDBrightness: Bright100");
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

	uint16_t Strobe = random16(200,350);

	// Constant
		// Under
		// ----
		// Front
		LEDs_Front(LEDs_Front_5G3S, LEDs_Front_5G3E).fill_solid(ColorWhite);
		// Grill
		LEDs_Grill(LEDs_Grill_6G3S, LEDs_Grill_6G4E).fill_solid(ColorWhite);
		// Rear
		// ----
	// Constant

	// Pulse 1
		// Under
		LEDs_Under(LEDs_Under_5G2S, LEDs_Under_5G2E).fill_solid(ColorBlack);
		LEDs_Under(LEDs_Under_5G4S, LEDs_Under_5G4E).fill_solid(ColorBlack);
		LEDs_Under(LEDs_Under_5G6S, LEDs_Under_5G6E).fill_solid(ColorBlack);
		LEDs_Under(LEDs_Under_5G1S, LEDs_Under_5G1E).fill_solid(ColorOrange);
		LEDs_Under(LEDs_Under_5G3S, LEDs_Under_5G3E).fill_solid(ColorOrange);
		LEDs_Under(LEDs_Under_5G5S, LEDs_Under_5G5E).fill_solid(ColorOrange);
		LEDs_Under(LEDs_Under_5G7S, LEDs_Under_5G7E).fill_solid(ColorOrange);
		// Front
		LEDs_Front(LEDs_Front_5G1S, LEDs_Front_5G1E).fill_solid(ColorBlack);
		LEDs_Front(LEDs_Front_5G5S, LEDs_Front_5G5E).fill_solid(ColorBlack);
		LEDs_Front(LEDs_Front_5G2S, LEDs_Front_5G2E).fill_solid(ColorOrange);
		LEDs_Front(LEDs_Front_5G4S, LEDs_Front_5G4E).fill_solid(ColorOrange);
		// Grill
		LEDs_Grill(LEDs_Grill_6G1S, LEDs_Grill_6G1E).fill_solid(ColorBlack);
		LEDs_Grill(LEDs_Grill_6G6S, LEDs_Grill_6G6E).fill_solid(ColorBlack);
		LEDs_Grill(LEDs_Grill_6G2S, LEDs_Grill_6G2E).fill_solid(ColorOrange);
		LEDs_Grill(LEDs_Grill_6G5S, LEDs_Grill_6G5E).fill_solid(ColorOrange);
		// Rear
		LEDs_Rear(LEDs_Rear_5G2S, LEDs_Rear_5G2E).fill_solid(ColorBlack);
		LEDs_Rear(LEDs_Rear_5G4S, LEDs_Rear_5G4E).fill_solid(ColorBlack);
		LEDs_Rear(LEDs_Rear_5G1S, LEDs_Rear_5G1E).fill_solid(ColorRed);
		LEDs_Rear(LEDs_Rear_5G3S, LEDs_Rear_5G3E).fill_solid(ColorRed);
		LEDs_Rear(LEDs_Rear_5G5S, LEDs_Rear_5G5E).fill_solid(ColorRed);
		// Display
		FastLED.show();
		FastLED.delay(Strobe);
	// Pulse 1

	// Pulse 2
		// Under
		LEDs_Under(LEDs_Under_5G1S, LEDs_Under_5G1E).fill_solid(ColorBlack);
		LEDs_Under(LEDs_Under_5G3S, LEDs_Under_5G3E).fill_solid(ColorBlack);
		LEDs_Under(LEDs_Under_5G5S, LEDs_Under_5G5E).fill_solid(ColorBlack);
		LEDs_Under(LEDs_Under_5G7S, LEDs_Under_5G7E).fill_solid(ColorBlack);
		LEDs_Under(LEDs_Under_5G2S, LEDs_Under_5G2E).fill_solid(ColorRed);
		LEDs_Under(LEDs_Under_5G4S, LEDs_Under_5G4E).fill_solid(ColorRed);
		LEDs_Under(LEDs_Under_5G6S, LEDs_Under_5G6E).fill_solid(ColorRed);
		// Front
		LEDs_Front(LEDs_Front_5G2S, LEDs_Front_5G2E).fill_solid(ColorBlack);
		LEDs_Front(LEDs_Front_5G4S, LEDs_Front_5G4E).fill_solid(ColorBlack);
		LEDs_Front(LEDs_Front_5G1S, LEDs_Front_5G1E).fill_solid(ColorWhite);
		LEDs_Front(LEDs_Front_5G5S, LEDs_Front_5G5E).fill_solid(ColorWhite);
		// Grill
		LEDs_Grill(LEDs_Grill_6G2S, LEDs_Grill_6G2E).fill_solid(ColorBlack);
		LEDs_Grill(LEDs_Grill_6G5S, LEDs_Grill_6G5E).fill_solid(ColorBlack);
		LEDs_Grill(LEDs_Grill_6G1S, LEDs_Grill_6G1E).fill_solid(ColorRed);
		LEDs_Grill(LEDs_Grill_6G6S, LEDs_Grill_6G6E).fill_solid(ColorRed);
		// Rear
		LEDs_Rear(LEDs_Rear_5G1S, LEDs_Rear_5G1E).fill_solid(ColorBlack);
		LEDs_Rear(LEDs_Rear_5G3S, LEDs_Rear_5G3E).fill_solid(ColorWhite);
		LEDs_Rear(LEDs_Rear_5G5S, LEDs_Rear_5G5E).fill_solid(ColorBlack);
		LEDs_Rear(LEDs_Rear_5G2S, LEDs_Rear_5G2E).fill_solid(ColorOrange);
		LEDs_Rear(LEDs_Rear_5G4S, LEDs_Rear_5G4E).fill_solid(ColorOrange);
		// Display
		FastLED.show();
		FastLED.delay(Strobe);
	// Pulse 2

	//Serial.println("Pattern: Full Utility");
}//----CH3 & CH4 & CH5 (7)----