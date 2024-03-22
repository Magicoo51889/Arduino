int LEDPin = 9;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  analogWrite(LEDPin, brightness); // update the brightness of the LED

  brightness = brightness + fadeAmount; // change the brightness for next time through the loop

  if (brightness == 0 || brightness == 255) { // reverse the direction of the fading at the ends of the fade
    fadeAmount = -fadeAmount;
  }

  delay(30);
}