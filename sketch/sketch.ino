int BUTTON = 2;

volatile bool LEDState = LOW;

void setup() {
    pinMode(BUTTON, INPUT);
    pinMode(LED_BUILTIN, OUTPUT);

    digitalWrite(LED_BUILTIN, LEDState);

    attachInterrupt(digitalPinToInterrupt(BUTTON), toggleLED, FALLING);

}

void loop() {
    // put your main code here, to run repeatedly
}

void toggleLED() {
    LEDState = !LEDState;
    digitalWrite(LED_BUILTIN, LEDState);
}