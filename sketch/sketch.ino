#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// The dimensions of the OLED display
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define SCREEN_ADDRESS 0x3C // This is the address of the OLED
#define OLED_RESET -1 // Reset pin for the display

// create the display object
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define BMPWidth 64
#define BMPHeight 64

const unsigned char LinkedinLogo [] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 
    0x00, 0x3f, 0xe0, 0x7f, 0xc3, 0xff, 0x80, 0x00, 0x00, 0x3f, 0xe0, 0x7f, 0xcf, 0xff, 0xe0, 0x00, 
    0x00, 0x3f, 0xe0, 0x7f, 0xdf, 0xff, 0xf0, 0x00, 0x00, 0x3f, 0xe0, 0x7f, 0xdf, 0xff, 0xf0, 0x00, 
    0x00, 0x3f, 0xe0, 0x7f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xe0, 0x7f, 0xff, 0xff, 0xf8, 0x00, 
    0x00, 0x3f, 0xe0, 0x7f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xe0, 0x7f, 0xff, 0xff, 0xfc, 0x00, 
    0x00, 0x3f, 0xe0, 0x7f, 0xf8, 0x1f, 0xfc, 0x00, 0x00, 0x3f, 0xe0, 0x7f, 0xf0, 0x0f, 0xfc, 0x00, 
    0x00, 0x3f, 0xe0, 0x7f, 0xe0, 0x0f, 0xfc, 0x00, 0x00, 0x3f, 0xe0, 0x7f, 0xe0, 0x07, 0xfc, 0x00, 
    0x00, 0x3f, 0xe0, 0x7f, 0xe0, 0x07, 0xfc, 0x00, 0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 
    0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 
    0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 
    0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 
    0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 
    0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 
    0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 
    0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 
    0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 0x00, 0x3f, 0xe0, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
  display.setRotation(4);
  // Clear the buffer
  display.clearDisplay();
}

void loop() {
  display.drawBitmap((SCREEN_WIDTH-BMPWidth)/2, (SCREEN_HEIGHT-BMPHeight)/2, LinkedinLogo, BMPWidth, BMPHeight, WHITE);
  display.display();
}
