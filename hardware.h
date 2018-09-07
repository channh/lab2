#ifndef hardware_h
#define hardware_h

// LED Settings.
typedef enum
  {
    LED_OFF,
    LED_ON,
    LED_NUMBER_OF_SETTINGS
  } led_setting;

// Motor Settings.
typedef enum
  {
    MOTOR_CLOSING,
    MOTOR_OFF,
    MOTOR_OPENING,
    MOTOR_NUMBER_OF_SETTINGS
  } motor_setting;

// Events.
typedef enum
  {
    CLOSE_BUTTON_PRESSED,
    CLOSED_DETECTED,
    OPEN_BUTTON_PRESSED,
    OPENED_DETECTED,
    NUMBER_OF_EVENTS
  } event;
#define INVALID_EVENT      -1

// Functions for controlling the LED Indicators.
void set_closed_indicator( led_setting value );

void set_opened_indicator( led_setting value );

// Functions for controlling the Motor.
void set_motor( motor_setting value );

#endif


