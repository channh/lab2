#include "hardware.h"
#include <stdio.h>

// The LED Indicators
void set_closed_indicator( led_setting value )
{
  if      (value == LED_ON ) printf("The YELLOW LED is now on.\n");
  else if (value == LED_OFF) printf("The YELLOW LED is now off.\n");
}

void set_opened_indicator( led_setting value )
{
  if      (value == LED_ON ) printf("The GREEN  LED is now on.\n");
  else if (value == LED_OFF) printf("The GREEN  LED is now off.\n");
}

// The Motor
void set_motor( motor_setting value )
{
  printf("The motor is now ");
  if      (value == MOTOR_CLOSING) printf("closing the door.\n");
  else if (value == MOTOR_OFF    ) printf("off.\n");
  else if (value == MOTOR_OPENING) printf("opening the door.\n");
}

