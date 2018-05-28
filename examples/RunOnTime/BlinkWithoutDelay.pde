/*
* #####################
* # BlinkWithoutDelay #
* #####################
* 
* @Author : Stefan Gotkowski
* @Since : 28/05/2018
*
*/

// Include library
#include <RunOnTime.h>

// Set state of led
int ledState = LOW;

// Set timeout 
int delay = 1000;

// Instantiate blinkLed in miliseconds
RunOnTime blinkLed( delay );

void setup()
{
  // Set led in output mode
  pinMode( LED_BUILTIN , OUTPUT );
}

void loop()
{
  // Is time to run ?
  if( blinkLed.changeDelay() )
  {
    // Invert led state
    if ( ledState == LOW ) 
      ledState = HIGH;
    else 
      ledState = LOW;
      
    // Change led sate
    digitalWrite( LED_BUILTIN , ledState ); 
  }
  
}
