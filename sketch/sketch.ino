//const int INPUT_BUTTON = 8; // the number of the input button pin

void setup()
{
	pinMode(LED_BUILTIN, OUTPUT);
    pinMode(3, OUTPUT);
    //pinMode(INPUT_BUTTON, INPUT);
    Serial.begin(115200);
    Serial.println("Hello, world!");
}

void loop()
{
    unsigned long currentTimestapMS = millis();
    Serial.print(currentTimestapMS);
    Serial.println("ms");

    // int buttonState = digitalRead(INPUT_BUTTON);
    // Serial.println(buttonState);
    // delay(10);


	digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
    digitalWrite(3, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(400);                      // wait for 0.4s
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
    digitalWrite(3, LOW);   // turn the LED off by making the voltage LOW
    delay(5000);                      // wait for 5s
}
