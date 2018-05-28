/*
*
* @Author : Stefan Gotkowski
* @Since : 28/05/2018
*
*/

// Include library from all Arduino libraries
#include <RunAtTime.h>

// Set state of led
int ledState = LOW;

// Set timeout 
int timeout = 1000;

// Instantiate blinkLed in miliseconds
RunAtTime blinkLed( timeout );

void setup(){
  // Set led output mode
  pinMode( LED_BUILTIN , OUTPUT );
}

void loop(){

  // Is time to run ?
  if( blinkLed.isTime() ){
  
    // Invert led state
    if ( ledState == LOW ) 
      ledState = HIGH;
    else 
      ledState = LOW;
      
    // Change led sate
    digitalWrite( LED_BUILTIN , ledState );
    
    // Change next timeout
    timeout -= 10;
    if( timeout <= 10 )
      timeout = 1000;
    blinkLed.changeTimeout( timeout );
    
  }
  
}
