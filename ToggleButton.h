// ToggleButton library for Arduino
// By Jester <jester@jestah.net>
// Provides a simple means of using a pushbutton as a toggle switch

#ifndef ToggleButton_h
#define ToggleButton_h

class ToggleButton
{
    public:
        Test(int);
        void setDebounce(int);
        bool currentState;
    
    private:
        void flipState(void);
        int readButton(void);
        int debounce;
        int button;
        
}
