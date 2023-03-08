//-----Pin Modes-----------------------------------------------
	pinMode(BuiltInLED, OUTPUT);
	pinMode(CH3, INPUT_PULLUP);
	pinMode(CH4, INPUT_PULLUP);
	pinMode(CH5, INPUT_PULLUP);
	pinMode(LED_Under_Pin, OUTPUT);
	pinMode(LED_Front_Pin, OUTPUT);
	pinMode(LED_Rear_Pin, OUTPUT);
	pinMode(DipUnderbodyWindshield, INPUT_PULLUP);
	pinMode(DipUnderbodyColor1, INPUT_PULLUP);
	pinMode(DipUnderbodyColor2, INPUT_PULLUP);
	pinMode(DipUnderbodyColor3, INPUT_PULLUP);
	pinMode(DipRedBlue, INPUT_PULLUP);
	pinMode(DipBrightness1, INPUT_PULLUP);
	pinMode(DipBrightness2, INPUT_PULLUP);
	pinMode(DipBrightness3, INPUT_PULLUP);
	pinMode(ButtonBrightness, INPUT_PULLUP);
	// Interrupt Pins
	//attachInterrupt(digitalPinToInterrupt(ButtonBrightness), Brightness, LOW);
	// Power On LED
	digitalWrite(BuiltInLED, HIGH);
//-----Pin Modes-----------------------------------------------

Serial.println("Set Pins Loaded");