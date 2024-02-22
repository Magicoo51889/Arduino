// const int timeUnit = 200;
int LED1Pin = 4;
int LED2Pin = 7;
int LED3Pin = 2;
int currentLED = 1;
const int switchPin = 11;
bool prevState = HIGH;
bool stateNow = HIGH;
bool LED1On = true;
bool LED2On = false;
bool LED3On = false;

void setup()
{
	pinMode(LED1Pin, OUTPUT);
    pinMode(LED2Pin, OUTPUT);
    pinMode(LED3Pin, OUTPUT);
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
    stateNow = digitalRead(switchPin);
    if (stateNow == LOW && prevState == HIGH) {
        if (LED1On==true) {
            LED1On = false;
            LED2On = true;
            LED3On = false;
            currentLED = LED2Pin;
        } else if (LED2On==true) {
            LED1On = false;
            LED2On = false;
            LED3On = true;
            currentLED = LED3Pin;
        } else if (LED3On==true) {
            LED1On = true;
            LED2On = false;
            LED3On = false;
            currentLED = LED1Pin;
        }
        digitalWrite(currentLED, HIGH);
    }

    
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
