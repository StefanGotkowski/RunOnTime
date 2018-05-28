/*
  RunOnTime.h (or BlinkWithoutDelay) - Library for launching a task after x milisecond
  Created by Stefan Gotkowski, 27 mai 2018
  Released into the public domain.
*/
#ifndef RunOnTime_h

  #define RunOnTime_h
  #include "Arduino.h"

  class RunOnTime
  {
    public:
      RunOnTime( unsigned long milisec );
      //
      //  Return true if the delay is passed
      //
      boolean isPassedDelay();
      //
      // Change delay
      //
      void changeDelay( unsigned long milisec );
      //
      // Reset delay 
      //
      void resetDelay();
      
    private:
      unsigned long _previousMillis = 0;
      unsigned long _milisec;
  };

#endif
