#ifndef BLINKY_H /* include guards */
#define BLINKY_H

#include <Arduino.h> /* we need arduino functions to implement this */

void blinky_init()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void startBlinkSequence(int delayInMilliseconds, int loopCount)
{
  for (int i = 0; i < loopCount; i++)
  {
    digitalWrite(LED_BUILTIN, LOW);
    delay(delayInMilliseconds);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(delayInMilliseconds);
  }
}

#endif
