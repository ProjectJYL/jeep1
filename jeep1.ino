//#include "DigitalIO.h"
#include <SPI.h>
#include "nRF24L01.h"
#include "RF24.h"
#include "printf.h"
#include "LCD_Functions.h"
#include <stdlib.h>


RF24 radio(22, 23);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  //Serial1.begin(9600);
  
  pinMode(13, OUTPUT);
  pinMode(50, OUTPUT);
  pinMode(51, OUTPUT);
  pinMode(52, OUTPUT);
  
  SPI.begin();
  SPI.setDataMode(SPI_MODE0);
  SPI.setBitOrder(MSBFIRST);
  SPI.setClockDivider(SPI_CLOCK_DIV4);
  digitalWrite(13, LOW);
  RF_Setup();
  LCD_Setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  LCD_Loop();
  RF_Loop();
}
