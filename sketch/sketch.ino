#include <Adafruit_BusIO_Register.h>
#include <Adafruit_I2CDevice.h>
#include <Adafruit_I2CRegister.h>
#include <Adafruit_SPIDevice.h>


//Verion 23.
//A programm to run the light monitoring device and display
// for the Auto Toaster - Jan 2025

//Import Libraries
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Servo.h>

// The dimensions of the OLED display
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SCREEN_ADDRESS 0x3C  // This is the address of the OLED

// create the display object
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

//Set Pins
//const int toasterOnpin = 1;     //Not Connected OPTIONAL?
const int elementPin = 4;     //This should = 2 for the hardware configuration
const int Luxpin = A1;          //Optional to connect for esting
const int ToastinPin = 8;
const int servoActive = 13;

//Declare variables
int luxVal;                // variables to read the value from the analog pins
bool toastIn;
bool element;
bool toastDone;
int angle = 0;          // Drop bread / lift toast

Servo toastServo;       // Create servo object


void setup() {

  //Setup oLED
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS, &Wire, -1);
  display.setRotation(4);
  display.invertDisplay(true);
  display.clearDisplay();

  //Declare I/O
  // pinMode(toasterOnpin, INPUT);
  pinMode(elementPin, INPUT);
  pinMode(Luxpin, INPUT);
  pinMode(ToastinPin, INPUT);
  pinMode(servoActive, OUTPUT);

  //Analog input Baud
  Serial.begin(9600);
 
  toastServo.attach(servoActive);
  toastServo.write(angle);        //Ensure start angle is zero
}

void loop() {

  // format oLED text
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.clearDisplay();
  display.display();
  
  //Optional Sensor check & monitor
  luxVal = 0;  // Clear
  Serial.println (luxVal);
  
  toastIn = LOW;  //reset
  toastDone = LOW;

  toastIn = digitalRead(ToastinPin);  //Bread inserted to close switch
  element = digitalRead(elementPin);   //Read element status
  delay (100);


  if(toastIn == HIGH && element == HIGH) {                      //Check toast is in
    for(int angle = 0; angle < 90; angle++)    //Lower Toast
      {
        toastServo.write(angle);
        delay (75);
      }
  }

    luxVal = analogRead(Luxpin);
    
    if (luxVal <100){
    toastDone = HIGH;
    }

    element = digitalRead(elementPin);   //Read element status
    delay (100);

    if (element == LOW && toastDone == HIGH) {                   //Check element off
      
        toastStatus_to_oLED();

      for(int angle = 90; angle > 0; angle--)  // Raise toast
        {
          toastServo.write(angle);
          delay(75);
        }
    }

  //Optional
  luxVal = analogRead(Luxpin);          //Check Lux level again if necessary
  Serial.println (luxVal);

}


void toastStatus_to_oLED() {
  display.clearDisplay();
  display.setCursor(40, 10);
  display.println("TOAST");
  display.setCursor(35, 45);
  display.println("READY!");
  display.display();
  delay (2000);

}