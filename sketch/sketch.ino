void setup() {
  Serial.begin(9600);
  Apin = pinMode(A0, INPUT);
}

void loop(){
  Serial.println("Voltage is:");
  Serial.println(measureVoltage(A0));
}

float measureVoltage(int APin){
  int ADU = analogRead(APin);;
  float voltage = ADU * (5.0 / 1024);
  return voltage;
}