// ToggleButton library for Arduino
// By Jester <jester@jestah.net>
// Provides a simple means of using a pushbutton as a toggle switch

#include "ToggleButton.h"

ToggleButton::ToggleButton(int buttonPin, beginState = false)
{
    button = buttonPin;
    debounce = 250;
    currentState = beginState;    
    
    pinMode(button, INPUT);
}


ToggleButton::flipState(void)
{
    // todo
}

ToggleButton::readButton(void)
{
    // todo
}
