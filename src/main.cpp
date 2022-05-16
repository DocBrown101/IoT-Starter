#include <Arduino.h> /* we need arduino functions to implement this */
#include "blinky.h"

void setup()
{
  blinky_init();
}

void loop()
{
  startBlinkSequence(50, 4);
  delay(3500);
}