# RunOnTime 

## About
RunAtTime is an Arduino C library. 

This light and easy library is based on [BlinkWithoutDelay](https://www.arduino.cc/en/Tutorial/BlinkWithoutDelay).

## How to install the library ?
- Download the [repository](https://github.com/StefanGotkowski/RunAtTime.git).
    
- Add the zip library into Arduino IDE.

    > Sketch > Include Library > Add .ZIP Library...

For more information on adding a library in Arduino IDE, see [this manual](https://www.arduino.cc/en/Guide/Libraries#toc4).

## How to use ?
- Try to understand the library with the example.

    > File > Examples > RunAtTime > RunAtTime

## What are features ?
- Instantiate
    - `RunAtTime( unsigned long milisec );` 
        - During the instantiation, the object will pass a delay in milisecondes
- Functions
    - `boolean isTime();` 
        - Return true if the time is passed
    - `void changeTimeout( long ms );`
        - Change the delay set at the instantiation
