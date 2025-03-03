const int ledPin = LED_BUILTIN;
int ledState = LOW;
unsigned long previousMillis = 0;
const long interval = 1000;
bool ReturnVal = false;

void setup(){
  pinMode(ledPin, OUTPUT);
}

void loop(){
  if(CheckTimeElapsed()) {
    ServiceToggleLED();
  }
}

bool CheckTimeElapsed(){
  ReturnVal = false;
  unsigned long currentMillis = millis(); 

  if (currentMillis >= previousMillis + interval) {
    previousMillis = currentMillis;
    ReturnVal = true;
  }
  return ReturnVal;
}

void ServiceToggleLED(){
  ledState = !ledState;
  digitalWrite(ledPin, ledState);
}