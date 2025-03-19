#define BUTTON 2

volatile bool LEDState = LOW;

void setup() {
  // set pin directions
  pinMode(BUTTON,INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  
  // set initial state of LED
  digitalWrite(LED_BUILTIN, LEDState);
  
  // set up ISR
  attachInterrupt(digitalPinToInterrupt(BUTTON), toggleLED, FALLING);
}

void loop() {  
  // wait an obnoxious amount of time to simulate other functions 
  // that Arduino may need to perform
  delay(2000);
}

void toggleLED() {
  LEDState = !LEDState;
  digitalWrite(LED_BUILTIN, LEDState);
}
