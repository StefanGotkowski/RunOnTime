/*
* ####################
* # FakesWavesDrawer #
* ####################
* 
* @Author : Stefan Gotkowski
* @Since : 28/05/2018
*
*/

// Include library
#include <RunOnTime.h>

// Instantiate nextLine in miliseconds
RunOnTime nextLine( 100 );

void setup()
{
  // Set serial
  Serial.begin( 9600 );
}

void loop()
{
  // Is time to run ?
  if( nextLine.isPassedDelay() )
  {    
    // Go to the next line
    Serial.println();

    // Change delay (value between 10 and 100)
    nextLine.changeDelay( random(10 , 100) );

    // Reset time passed
    nextLine.resetTimer();
  }

  Serial.print( "_" );
  
}
