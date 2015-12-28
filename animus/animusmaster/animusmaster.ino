#include "EEPROM.h"

// constants: change this only to edit keyboard info
const int ROW = 4;
const int COL = 6;
const int LAY = 3;
String KBINFO = "DivergeTM,Diverge TM,animusDTM,Diverge TM QWERTY";
int vPins[ROW] = { A3, A2, 9, 16};
int hPins[COL] = { 10, 8, 7, 6, 5, 4};

int bitRate = 9600;
int refreshDelay = 10;
// constants end


void setup()
{
  Keyboard.begin();
  Serial.begin(bitRate);
  resetPins();
  // serial delay
  delay(2000);
}