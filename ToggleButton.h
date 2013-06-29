// ToggleButton library for Arduino
// By Jester <jester@jestah.net>
// Provides a simple means of using a pushbutton as a toggle switch

#ifndef ToggleButton_h
#define ToggleButton_h

#include "Arduino.h"

class ToggleButton
{
    public:
        ToggleButton(int, int, bool beginState = false);
        void setDebounce(int);
        void checkButton(void);
        bool currentState;
    
    private:
        void flipState(void);
        int activeState;
        int debounce;
        int button;
        
};

#endif
