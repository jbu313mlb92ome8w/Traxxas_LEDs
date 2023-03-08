//-----LED Array Variables-------------------------------------
	// Underbody LEDs
	FastLED.addLeds<Chipset, LED_Under_Pin, Order>(LEDs_Under, LED_Under_LEDs).setCorrection(TypicalLEDStrip);
	// Front LEDs
	FastLED.addLeds<Chipset, LED_Front_Pin, Order>(LEDs_Front, LED_Front_LEDs).setCorrection(TypicalLEDStrip);
	// Grill LEDs
	FastLED.addLeds<Chipset, LED_Grill_Pin, Order>(LEDs_Grill, LED_Grill_LEDs).setCorrection(TypicalLEDStrip);
	// Rear LEDs
	FastLED.addLeds<Chipset, LED_Rear_Pin, Order>(LEDs_Rear, LED_Rear_LEDs).setCorrection(TypicalLEDStrip);
//-----LED Array Variables-------------------------------------

	// LED Brightness - Default
	//FastLED.setBrightness(Bright50);

	// Black Out LEDs on Boot
	FastLED.clear(true);
	Serial.println("Blacked Out");
	
Serial.println("Set LEDs Loaded");