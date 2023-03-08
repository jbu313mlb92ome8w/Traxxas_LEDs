void Receiver(){

	// Read the State of the Channels:
	int CH3_DigitalRead = pulseIn(CH3, HIGH, PWMTimeout);
	int CH4_DigitalRead = pulseIn(CH4, HIGH, PWMTimeout);
	int CH5_DigitalRead = pulseIn(CH5, HIGH, PWMTimeout);

//-----CH3-----------------------------------------------------
	if(OnLowerTrigger < CH3_DigitalRead && CH3_DigitalRead < OnUpperTrigger){
		//Serial.println("Start");
		CH3_Value = 1;
		//Serial.print("CH3_PreLast: ");
		//Serial.println(CH3_Last);
		CH3_Last = CH3_Value;
		//Serial.print("CH3_PostLast: ");
		//Serial.println(CH3_Last);
		//Serial.println("CH3_True");
		//Serial.print("CH3_Value: ");
		//Serial.println(CH3_Value);
		//Serial.println("End");
	} 
	else if(OffLowerTrigger < CH3_DigitalRead && CH3_DigitalRead < OffUpperTrigger){
		//Serial.println("Start");
		CH3_Value = 0;
		//Serial.print("CH3_PreLast: ");
		//Serial.println(CH3_Last);
		CH3_Last = CH3_Value;
		//Serial.print("CH3_PostLast: ");
		//Serial.println(CH3_Last);
		//Serial.println("CH3_False");
		//Serial.print("CH3_Value: ");
		//Serial.println(CH3_Value);
		//Serial.println("End");
	}
	else if(CH3_DigitalRead < IgnoreTrigger){
		//Serial.println("Start");
		//Serial.print("CH3_PreLast: ");
		//Serial.println(CH3_Last);
		CH3_Value = CH3_Last;
		//Serial.print("CH3_PostLast: ");
		//Serial.println(CH3_Last);
		//Serial.println("CH3_Ignore----------------------------------");
		//Serial.print("CH3_Value: ");
		//Serial.println(CH3_Value);
		//Serial.println("End");
	}
/*	else{
		CH3_Value = 0;
		Serial.println("CH3_Default");
		Serial.println(CH3_Value);
	}*/
//-----CH3-----------------------------------------------------

//-----CH4-----------------------------------------------------
	if(OnLowerTrigger < CH4_DigitalRead && CH4_DigitalRead < OnUpperTrigger){
		CH4_Value = 2;
		CH4_Last = CH4_Value;
		//Serial.println("CH4_True");
	}
	else if(OffLowerTrigger < CH4_DigitalRead && CH4_DigitalRead < OffUpperTrigger){
		CH4_Value = 0;
		CH4_Last = CH4_Value;
		//Serial.println("CH4_False");
	}
	else if(CH4_DigitalRead < IgnoreTrigger){
		CH4_Value = CH4_Last;
		//Serial.println("CH4_Ignore");
	}
	else{
		CH4_Value = 0;
		//Serial.println("CH4_Default");
	}
//-----CH4-----------------------------------------------------

//-----CH5-----------------------------------------------------
	if(OnLowerTrigger < CH5_DigitalRead && CH5_DigitalRead < OnUpperTrigger){
		CH5_Value = 4;
		CH5_Last = CH5_Value;
		//Serial.println("CH5_True");
	}
	else if(OffLowerTrigger < CH5_DigitalRead && CH5_DigitalRead < OffUpperTrigger){
		CH5_Value = 0;
		CH5_Last = CH5_Value;
		//Serial.println("CH5_False");
	}
	else if(CH5_DigitalRead < IgnoreTrigger){
		CH5_Value = CH5_Last;
		//Serial.println("CH5_Ignore");
	}
	else{
		CH5_Value = 0;
		//Serial.println("CH5_Default");
	}
//-----CH5-----------------------------------------------------

	//----LED Value-----
	LED_Value = (CH3_Value + CH4_Value + CH5_Value);
	//Serial.print("LED_Value: ");
	//Serial.println(LED_Value);
	//----LED Value-----

	//----Channel Testing Values----
	//Serial.print("CH3_Value: ");
	//Serial.println(CH3_Value);
	//Serial.print("CH3_DigitalRead: ");
	//Serial.println(CH3_DigitalRead);

	//Serial.print("CH4_Value: ");
	//Serial.println(CH4_Value);
	//Serial.print("CH4_DigitalRead: ");
	//Serial.println(CH4_DigitalRead);

	//Serial.print("CH5_Value: ");
	//Serial.println(CH5_Value);
	//Serial.print("CH5_DigitalRead: ");
	//Serial.println(CH5_DigitalRead);
	//----Channel Testing Values----

}// End Receiver