// ToggleButton library for Arduino
// By Jester <jester@jestah.net>
// Provides a simple means of using a pushbutton as a toggle switch

#include "ToggleButton.h"

// constructor
// Set up input pin, active state of the button (HIGH or LOW),
// the debounce duration, and the starting toggle state
ToggleButton::ToggleButton(int buttonPin, int buttonActiveState, bool beginState)
{
    button = buttonPin;
    debounce = 250;
    currentState = beginState;
    activeState = buttonActiveState;   
    
    pinMode(button, INPUT);
};

// Check if the button is active (pressed) and flip the toggle if it is
void ToggleButton::checkButton(void)
{    
    int state = digitalRead(button);
    
    if(state == activeState)
    {
        flipState();
    }
}

// Flip the toggle state
void ToggleButton::flipState(void)
{
    delay(debounce); // Debounce (stablilize) the input
    
    if(currentState == true)
    {
        currentState = false;
    }
    else
    {
        currentState = true;
    }
}

void ToggleButton::setDebounce(int duration)
{
        debounce = duration;
}
