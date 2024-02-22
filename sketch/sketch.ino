// const int timeUnit = 200;
int LEDPin = 4;
const int switchPin = 11;
bool prevState = LOW;
bool stateNow = LOW;
bool LEDOn = false;

void setup()
{
	pinMode(LEDPin, OUTPUT);
    pinMode(switchPin, INPUT);
    Serial.begin(115200);
}

// void Dot(int timeUnit) {
//     digitalWrite(LED_BUILTIN, HIGH);
//     delay(timeUnit);                     
//     digitalWrite(LED_BUILTIN, LOW); 
//     delay(timeUnit);
// }

// void Dash(int timeUnit){
//     digitalWrite(LED_BUILTIN, HIGH);
//     delay(timeUnit*3);
//     digitalWrite(LED_BUILTIN, LOW);
//     delay(timeUnit);
// }

void loop()
{
    stateNow = digitalRead(switchPin); // toggles the LED on and off
    if (stateNow != prevState) {
        if (stateNow == LOW) {
            LEDOn = !LEDOn;
            digitalWrite(LEDPin, LEDOn);
        }
    }
    prevState = stateNow;

    
    // for (int i = 0; i < 3; i++) {
    //     Dot(timeUnit);
    // }
    
    // delay(timeUnit*3); // break between letters

    // for (int i = 0; i < 3; i++) {
    //     Dash(timeUnit);
    // }

    // delay(timeUnit*3);  // break between letters

    // for (int i = 0; i < 3; i++) {
    //     Dot(timeUnit);
    // }

    // delay(timeUnit*7); //break before repeating the sequence
}
