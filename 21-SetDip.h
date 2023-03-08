//-----Dip Values----------------------------------------------
	// Windshield On/Off
	if(digitalRead(DipUnderbodyWindshield) == LOW){DipUnderbodyWindshieldValue += 1;}
	Serial.print("Dip Windshield Value: ");
	Serial.println(DipUnderbodyWindshieldValue);

	if(DipUnderbodyWindshieldValue == DipWOn){
		WindshieldColor = ColorWhite;
	}
	else if(DipUnderbodyWindshieldValue == DipWOff){
		WindshieldColor = ColorBlack;
	}
	// Windshield On/Off

	// Underbody Color
	if(digitalRead(DipUnderbodyColor1) == LOW){DipUnderbodyColorValue += 1;}
	if(digitalRead(DipUnderbodyColor2) == LOW){DipUnderbodyColorValue += 2;}
	if(digitalRead(DipUnderbodyColor3) == LOW){DipUnderbodyColorValue += 4;}
	Serial.print("Dip Underbody Value: ");
	Serial.println(DipUnderbodyColorValue);

	switch(DipUnderbodyColorValue){
		// Black
		case(DipUBlack):
			UnderbodyColor = ColorBlack;
			break;
		// NavajoWhite
		case(DipUWhite):
			UnderbodyColor = ColorWhite;
			break;
		// Green
		case(DipUGreen):
			UnderbodyColor = ColorGreen;
			break;
		// Blue
		case(DipUBlue):
			UnderbodyColor = ColorBlue;
			break;
		// Red
		case(DipURed):
			UnderbodyColor = ColorRed;
			break;
		// Orange
		case(DipUOrange):
			UnderbodyColor = ColorOrange;
			break;
		// OrangeRed
		case(DipUOrangeRed):
			UnderbodyColor = ColorOrangeRed;
			break;
		// Purple
		case(DipUPurple):
			UnderbodyColor = ColorPurple;
			break;
		}
	// Underbody Color

	// Red/Blue Police
	if(digitalRead(DipRedBlue) == LOW){DipRedBlueColorValue += 1;}
	Serial.print("Dip Red/Blue Value: ");
	Serial.println(DipRedBlueColorValue);

	if(DipRedBlueColorValue == DipPRed){
		PoliceColor1 = ColorRed;
		PoliceColor2 = ColorBlue;
	}
	else if(DipRedBlueColorValue == DipPBlue){
		PoliceColor1 = ColorBlue;
		PoliceColor2 = ColorBlue;
	}
	// Red/Blue Police

	// Brightness
	if(digitalRead(DipBrightness1) == LOW){DipBrightnessValue += 1;}
	if(digitalRead(DipBrightness2) == LOW){DipBrightnessValue += 2;}
	if(digitalRead(DipBrightness3) == LOW){DipBrightnessValue += 4;}
	Serial.print("Dip Brightness Value: ");
	Serial.println(DipBrightnessValue);
	// Brightness
//-----Dip Values----------------------------------------------

Serial.println("Set Dip Loaded");