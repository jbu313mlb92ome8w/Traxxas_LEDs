void Brightness(){

	if(DipBrightnessValue != DipBD){
		UpdateBrightness = true;
		Serial.println("UpdateBrightness");
	}
}
/*

void BrightnessRecall(){
	
	uint8_t	MemoryAddress;
	uint8_t BrightnessMem = EEPROM.read(MemoryAddress);

	switch(BrightnessMem){// Brightness Level
		case(DipB0):
			FastLED.setBrightness(Bright0);
			break;
		case(DipB35):
			FastLED.setBrightness(Bright35);
			break;
		case(DipB50):
			FastLED.setBrightness(Bright50);
			break;
		case(DipB62):
			FastLED.setBrightness(Bright62);
			break;
		case(DipB75):
			FastLED.setBrightness(Bright75);
			break;
		case(DipB100):
			FastLED.setBrightness(Bright100);
			break;
	}// Brightness Level
}


//void ChangeBrightness


void Brightness(){
	unsigned long LastPress;
	unsigned long DebounceTime = 250;
//	uint8_t MemoryAddress;

	if(DipBrightnessValue != DipBD){
		if((millis() - LastPress) > DebounceTime){
			switch(DipBrightnessValue){// Determine Brightness
				//----Brightness 0%----
				case(DipB0):
					EEPROM.write(MemoryAddress, DipB0);
					Serial.println("Interupt");
					break;
				//----Brightness 35%----
				case(DipB35):
					EEPROM.write(MemoryAddress, DipB35);
					break;
				//----Brightness 50%----
				case(DipB50):
					EEPROM.write(MemoryAddress, DipB50);
					break;
				//----Brightness 62%----
				case(DipB62):
					EEPROM.write(MemoryAddress, DipB62);
					break;
				//----Brightness 75%----
				case(DipB75):
					EEPROM.write(MemoryAddress, DipB75);
					break;
				//----Brightness 85%----
				case(DipB85):
					EEPROM.write(MemoryAddress, DipB85);
					break;
				//----Brightness 100%----
				case(DipB100):
					EEPROM.write(MemoryAddress, DipB100);
					break;
			}// Determine Brightness
			
		UpdateBrightness = true;
		Serial.println("UpdateBrightness");
		LastPress = millis();
		
		}
	}
}
*/