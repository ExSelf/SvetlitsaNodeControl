/*
  SNC.h - Svetlitsa Node Control library
  Created by Eugene Svetlitsa, September 26, 2025
  Updated by by Eugene Svetlitsa, September 26, 2025
  Released into the public domain
*/

#ifndef SNC_h
#define SNC_h

class SNC
{
  public:
    SNC(int pin, int numLeds);
    void begin();
  private:
    int _pin;
};
#endif

