# RunAtTime (V1.0.0)

## About
RunAtTime is an Arduino C library. 

This library is based from [BlinkWithoutDelay](https://www.arduino.cc/en/Tutorial/BlinkWithoutDelay).

It's an light and easy library to use.

## How to install library ?
- Download this repository.

    > Clone or download
    
- Open zip library with Arduino IDE.

    > Sketch > Include Library > Add .ZIP Library...

For more information, please read [this manual](https://www.arduino.cc/en/Guide/Libraries#toc4) (Importing a .zip Library).

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
