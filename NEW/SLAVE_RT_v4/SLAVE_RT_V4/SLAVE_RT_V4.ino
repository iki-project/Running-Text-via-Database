/* ********************************************************************
   THIS DEMO TESTED ON ARDUINO UNO, NANO, PRO MINI (ATMEGA328P)
 * ********************************************************************
   HUB08 (matrix led) to ARDUINO pin connection
   LA / A    -> Digital Pin 4
   LB / B    -> Digital Pin 5
   LC / C    -> Digital Pin 6
   LD / D    -> Digital Pin 7
   S / CLK   -> Digital Pin 13
   R1 / R    -> Digital Pin 11
   OE / EN   -> Digital Pin 3
   L / LAT / STB -> Digital Pin 2

 * ********************************************************************
   If display in matrix led invert, change in HUB08SPI.cpp
   Find :
      SPI.transfer(*ptr);
   Change to :
      SPI.transfer(~*ptr);
   Detail, check in :
      https://github.com/emgoz/HUB08SPI/issues/5
 *********************************************************************/


#include <avr/pgmspace.h>
#include <Filters.h>
#include <EEPROM.h>
#include <SPI.h>
#include "HUB08SPI.h"
#include <TimerOne.h>
#include <ArduinoJson.h>
#include "Buffer.h"

#define WIDTH   128 // width of led matrix (pixel)
#define HEIGHT  32 // height of led matrix

HUB08SPI display;
uint8_t displaybuf[WIDTH * HEIGHT / 8];
Buffer buff(displaybuf, 128, 32);

int y, ii;
String rcv = "";

int indek, zzz, yyy;
char* dataserial;
volatile uint16_t x = 0;

#include "ronnAnimation.h"
void refresh() {
  static uint16_t count = 0;
  count++;
  if (count > 180) { //scoll every 180 line scans
    count = 0;
    x++; //sebelumnya ii
    if (x > 480) x = 0;  //reset after 480 pixels
  }
  display.scan();  //refresh a single line of the display
}

char rxData;
char comment[50];

String data; 
String string1;
String string2;

int x1; 
int x2;
int line;
void setup() {
  display.begin(displaybuf, WIDTH, HEIGHT);
  Serial.begin(9600);
  Timer1.initialize(800);  //800 us -> refresh rate 1250 Hz per line / 16 = 78 fps
  Timer1.attachInterrupt(refresh);
  display.setBrightness(200);     //low brightness to save energy
  buff.clear();                   //clear display led matrix
  buff.bitmap(0, -4, 128, 25, logoReka, 1); //bitmap log
  delay(3000);
  ronn.clear_D();

}


void loop() {
while(Serial.available())
  {
    rxData = Serial.read();

    if(rxData == '\r' || rxData == '\n')
    {
      data = String(comment);

      if(data.length()>0){
        Serial.print("Data Masuk: ");
        Serial.println(data);
        delay(1000);

        x1 = data.indexOf(",");
        x2 = data.indexOf("\n",x1+1);

        string1 = data.substring(0,x1);
        ronn.setFont(font_12px);
        ronn.printText(string1, 39, 2);
        string2 = data.substring(x1+1,x2);

        Serial.print("String 1 : "); Serial.println(string1);
        Serial.print("String 2 : "); Serial.println(string2);
        Serial.println();
        String stringOne=string2;
        char charBuf[50];
        stringOne.toCharArray(charBuf,50);
        Serial.println(stringOne);
        ronn.setFont(font_15px);
        ronn.scrollText_LR(charBuf, 0, 15, 128, 70);
        for(int i=0; i<9;i++){
//          Serial.print(" 0x");
//          Serial.print(charBuf[i], HEX);
          }
      }
      for(int i=0; i< sizeof(comment); i++){
        comment[i] = char(0);
      }
      line = 0;
    }
    else
    {
        comment[line++] = rxData;
    }
  }
//  ronn.setFont(font_12px);
//  ronn.printText("DIRECT TXT", 39, 2);
 //Check to see if anything is available in the serial receive buffer

// ronn.setFont(font_15px);
// ronn.scrollText_LR(number, 0, 15, 128, 70);

 //Reset for the next message
}
