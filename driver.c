#include "statemodel.h"

extern state_t* current_state;

int main(void)
{
    event   current_event;
    int     key;

    printStateName();
    current_state->entry_to();

    while ((key=getchar()) != 'x')
    {
        if (key == '\n') continue;

        current_event = INVALID_EVENT;
        switch (key)
        {
            case 'c':
                current_event = CLOSE_BUTTON_PRESSED;
                puts("Event: CLOSE_BUTTON_PRESSED");
                break;
            case 'C':
                current_event = CLOSED_DETECTED;
                puts("Event: CLOSED_DETECTED");
                break;
            case 'o':
                current_event = OPEN_BUTTON_PRESSED;
                puts("Event: OPEN_BUTTON_PRESSED");
                break;
            case 'O':
                current_event = OPEN_DETECTED;
                puts("Event: OPEN_DETECTED");
                break;
            default:
                puts("Event: INVALID_EVENT");
        }

        if (current_event != INVALID_EVENT)
            handle_event(current_event);
    }
}