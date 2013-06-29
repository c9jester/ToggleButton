ToggleButton
============

An Arduino library for using a pushbutton as an on/off switch.


Overview
--------

ToggleButton provides a quick, clean way to use a basic NO push button as an on/off toggle switch with the Arduino. It aims to be lean, but with enough flexibility to fit most use cases.


Installation
------------

Just clone the repository into your sketchbook. The library should then be available like the example below.

Usage
-----

```cpp
// ToggleButton example sketch
// Toggles an LED on/off

#include "ToggleButton.h"

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


Other Useful Information
------------------------

When declaring your ToggleButton object, you can also choose a currentState to start in. This means you could have the toggle start in the "on" position. The default is false (off).
```cpp
ToggleButton btn(3, HIGH, true);
```

When checking the button's input and flipping the state, the input must be [debounced](http://en.wikipedia.org/wiki/Debounce#Contact_bounce "debounced"). The default duration for debouncing is 250ms. I found this to be a pretty decent default, but you can set it like so:
```cpp
btn.setDebounce(500); // Half-second debounce delay
```
