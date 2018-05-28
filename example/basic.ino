/*
*  ###########
*  ## BASIC ##
*  ###########
*
* @Author : Stefan Gotkowski
* @Since : 28/05/2018
*/

// Include library from all Arduino libraries
#include <RunAtTime.h>
// or 
// Include library from code directory
// #include "RunAtTime.h"

// Instantiate blinkLed
RunAtTime blinkLed( 2000 );

// Set state of led
int ledState = LOW;

void setup(){
  // Set led output mode
  pinMode( LED_BUILTIN , OUTPUT );
}

void loop(){

  // Run now
  if( blinkLed.isTime() ){
  
    // Invert state
    if (ledState == LOW) 
      ledState = HIGH;
    else 
      ledState = LOW;
      
    //Change sate
    digitalWrite( LED_BUILTIN , ledState);
  }
}
