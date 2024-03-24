int ledPin = 3;
int switchPin = 7;

int brightness = 0;
int defaultBrightness = 63;
int fadeAmount = 5;

int delayTime = 100;

bool prevState = LOW;
bool stateNow = LOW;

void Flash() {
  digitalWrite(ledPin, HIGH); // turn the LED on
  delay(delayTime); // wait for a second
  digitalWrite(ledPin, LOW); // turn the LED off
  delay(delayTime); // wait for a second
}

void FadeIn() {
  for (int i = 0; i <= 255; i++) {
    analogWrite(ledPin, i);
    delay(delayTime);
  }
}

void FadeOut() {
  for (int i = 255; i >= 0; i--) {
    analogWrite(ledPin, i);
    delay(delayTime);
  }
}


void setup () {
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop () {
  stateNow = digitalRead(switchPin);
  if(stateNow == HIGH){
    for (int i = 0; i <= 4; i++) { // repeat the flash 4 times
      Flash();
    }

    for (int i = 0; i <= 3; i++) {// repeat the fade 3 times
      FadeIn();
      FadeOut();
    }
  } else {
    analogWrite(ledPin, defaultBrightness);
  }
}
