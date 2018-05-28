/*
  RunAtTime.h (or BlinkWithoutDelay)- Library for launching an task after x miliseconds
  Created by Stefan Gotkowski, 27 mai 2018
  Released into the public domain.
*/

#include "RunAtTime.h"

RunAtTime::RunAtTime( unsigned long milisec )
{
  _milisec = milisec;
}

/*
  Return true if it's time 
 */
boolean RunAtTime::isTime(){
  
  unsigned long currentMillis = millis();
  
  if( currentMillis - _previousMillis >= _milisec ){
    _previousMillis = currentMillis;
    return true;
  }
  return false;
}

/*
  Change Timeout in miliseconds
*/
void RunAtTime::changeTimeout( long ms ){
  _milisec = ms;
}

/*
  Reset current time to 0
*/
void RunAtTime::reset(  ){
  _previousMillis = 0;
}
