const int buttonPin = 13;
bool buttonValue;

const int div2Pin = 10;
const int div3Pin = 9;
const int div5Pin = 8;

int Counter = 0;

void setup() {
  pinMode(div2Pin, OUTPUT);
  pinMode(div3Pin, OUTPUT);
  pinMode(div5Pin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonValue = digitalRead(buttonPin);

  if (buttonValue == LOW) {
    Counter++;

    int Div2 = Counter % 2;
    int Div3 = Counter % 3;
    int Div5 = Counter % 5;

    Serial.println("Button is pressed");
    Serial.println(Counter);
    Serial.println(div2Pin);

    if (Div2 = 0) {
      digitalWrite(div2Pin, HIGH);
    }
    if (Div3 = 0) {
      digitalWrite(div3Pin, HIGH);
    }
    if (Div5 = 0) {
      digitalWrite(div5Pin, HIGH);
    }
    delay(2000);
  } else {
    digitalWrite(div2Pin, LOW);
    digitalWrite(div3Pin, LOW);
    digitalWrite(div5Pin, LOW);
    Serial.println("Button is not pressed");
  }

  delay(100);
}
