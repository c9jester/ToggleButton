ToggleButton
============

An Arduino library for using a pushbutton as an on/off switch.


Overview
--------

ToggleButton provides a quick, clean way to use a basic NO push button as an on/off toggle switch with the Arduino. It aims to be lean, but with enough flexibility to fit most use cases.


Usage
-----

```cpp
// ToggleButton example sketch
// Toggles an LED on/off

#include "ToggleButton/ToggleButton.h"

// LED on digital pin 2
const int LED = 2;

// Button on digital pin 3 with a pull-down resistor (active high)
ToggleButton btn(3, HIGH);

void setup()
{
    // Set the LED pin to output
    pinMode(LED, OUTPUT);
    
    // The ToggleButton handles the pinMode for the button
}

void loop()
{
    // Checks if the button is active and flips the state if necessary
    btn.checkButton();
    
    // Do something, depending on whether it's toggled on or off
    if(btn.currentState == true)
    {
        // ON
        digitalWrite(LED, HIGH);
    }
    else
    {
        // OFF
        digitalWrite(LED, LOW);
    }
}
```
