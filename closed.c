#include "closed.h"
#include "hardware.h"
#include "statemodel.h" // For the other states

// Create the object of the closed state.
state_t closed = {
    default_event_handler,   // close_button_pressed
    default_event_handler,   // closed_detected
    open_button,             // open_button_pressed
    default_event_handler,   // opened_detected
    entry_to_closed,         // entry_to
    exit_from_closed         // exit_from
};

state_t* open_button()
{
  exit_from_closed();
  return &opening;
}

void entry_to_closed()
{
  set_closed_indicator(LED_ON);
}

void exit_from_closed()
{
  set_closed_indicator(LED_OFF);
}

