# RunOnTime 

## About

RunOnTime allows to indicate that a certain time delay expired. It is similar to delay() function without the need to block your code.

This Arduino C library is built from [BlinkWithoutDelay](https://www.arduino.cc/en/Tutorial/BlinkWithoutDelay).

## How to install the library ?
- Download the [repository](https://github.com/StefanGotkowski/RunAtTime.git).
    
- Add the zip library into Arduino IDE.

    > Sketch > Include Library > Add .ZIP Library...

For more information on adding a library in Arduino IDE, see [this manual](https://www.arduino.cc/en/Guide/Libraries#toc4).

## How to use ?

- Instantiate
    - `RunOnTime( unsigned long milisec );` 
        - 'milisec' indicates the delay
- Functions
    - `boolean isPassedDelay();` 
        - 'true' if the delay has passed, 'false' outherwise
    - `void changeDelay( unsigned long milisec );`
        - 'milisec' changes the instantiated delay

- Example - see Arduino IDE under:

    > File > Examples > RunOnTime > RunOnTime


