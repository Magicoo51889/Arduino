//const int INPUT_BUTTON = 8; // the number of the input button pin

void setup()
{
	pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(115200);
}

void loop()
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(400);                     
    digitalWrite(LED_BUILTIN, LOW); 
    delay(400);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(400);                     
    digitalWrite(LED_BUILTIN, LOW); 
    delay(400);               
    digitalWrite(LED_BUILTIN, HIGH);
    delay(400);                     
    digitalWrite(LED_BUILTIN, LOW); 
    delay(400);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1200);                     
    digitalWrite(LED_BUILTIN, LOW); 
    delay(400);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1200);                     
    digitalWrite(LED_BUILTIN, LOW); 
    delay(400);    
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1200);                     
    digitalWrite(LED_BUILTIN, LOW); 
    delay(400);    
    digitalWrite(LED_BUILTIN, HIGH);
    delay(400);                     
    digitalWrite(LED_BUILTIN, LOW); 
    delay(400);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(400);                     
    digitalWrite(LED_BUILTIN, LOW); 
    delay(400);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(400);                     
    digitalWrite(LED_BUILTIN, LOW); 
    delay(1200); //break before repeating the sequence
}
