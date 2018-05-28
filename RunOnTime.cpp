/*
  RunOnTime.h (or BlinkWithoutDelay) - Library for launching an task after x miliseconds
  Created by Stefan Gotkowski, 27 mai 2018
  Released into the public domain.
*/

#include "RunOnTime.h"

RunOnTime::RunOnTime( unsigned long milisec )
{
  _milisec = milisec;
}

boolean RunOnTime::isPassedDelay()
{
  unsigned long currentMillis = millis();
  
  if( currentMillis - _previousMillis >= _milisec )
  {
    _previousMillis = currentMillis;
    return true;
  }
  return false;
}

void RunOnTime::changeDelay( unsigned long milisec )
{
  _milisec = milisec;
}

void RunOnTime::resetTimer()
{
  _previousMillis = millis();
}
