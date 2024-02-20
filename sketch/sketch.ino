const int timeUnit;

void setup()
{
	pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(115200);
    timeUnit = 200;
}

void Dot(int timeUnit) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(timeUnit);                     
    digitalWrite(LED_BUILTIN, LOW); 
    delay(timeUnit);

}

void Dash(int timeUnit){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(timeUnit*3);
    digitalWrite(LED_BUILTIN, LOW);
    delay(timeUnit);
}

void loop()
{
    for (int i = 0; i < 3; i++) {
        Dot(timeUnit);
    }
    
    delay(timeUnit*3); // break between letters

    for (int i = 0; i < 3; i++) {
        Dash(timeUnit);
    }

    delay(timeUnit*3);  // break between letters

    for (int i = 0; i < 3; i++) {
        Dot(timeUnit);
    }

    delay(timeUnit*7); //break before repeating the sequence
}
