/*
  SNC.h - Svetlitsa Node Control library
  Created by Eugene Svetlitsa, September 26, 2025
  Updated by by Eugene Svetlitsa, September 26, 2025
  Released into the public domain
*/

#include "Arduino.h"

#ifdef ESP32
  #include <WiFi.h>
#elif ESP8266
  #include <ESP8266WiFi.h>
#endif

#include <FastLED.h>
#include "SNC.h"

SNC::SNC(int pin, int numLeds)
{
  _pin = pin;
  _numLeds = numLeds;
}

void SNC::begin()
{
  CRGB leds[_numLeds];
  FastLED.addLeds<WS2812, _pin, GRB>(leds, _numLeds);
}
