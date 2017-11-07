#include <U8glib.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


#define OLED_RESET A1
Adafruit_SSD1306 display(OLED_RESET);

void setup()
{
 Serial.begin(9600);

 display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3C (for the 128x32)
 
  display.display();
  delay(20);

 // Clear the buffer.
  display.clearDisplay();
  display.setTextSize(2);
 
  display.setTextColor(WHITE);

}

void loop() 
{
  
  display.setCursor(50,0);
  display.print("GOOD ");
  
  display.display(); // plotted items don't appear until this refreshes scrn
  delay(2000);
  display.clearDisplay(); // all pixels off
}

