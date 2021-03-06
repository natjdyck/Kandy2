#ifndef EVENTS_H
#define EVENTS_H
#include <Arduino.h>

const uint8_t INPUT_MASK = 0xF0;
const uint8_t ACTION_MASK = 0x0F;

const uint8_t SCROLL_LEFT   = 0b00010000;
const uint8_t SCROLL_RIGHT  = 0b00100000;
const uint8_t SCROLL_CENTER = 0b00110000;
const uint8_t BUTTON_NORTH  = 0b01000000;
const uint8_t BUTTON_SOUTH  = 0b01010000;
const uint8_t BUTTON_EAST   = 0b01100000;
const uint8_t BUTTON_WEST   = 0b01110000;

const uint8_t CW = 1;
const uint8_t CCW = 2;
const uint8_t PRESS = 3;
const uint8_t RELEASE = 4;

const uint8_t SCROLL_LEFT_CW = SCROLL_LEFT | CW;
const uint8_t SCROLL_LEFT_CCW = SCROLL_LEFT | CCW;
const uint8_t SCROLL_LEFT_PRESS = SCROLL_LEFT | PRESS;
const uint8_t SCROLL_LEFT_RELEASE = SCROLL_LEFT | RELEASE;

const uint8_t SCROLL_RIGHT_CW = SCROLL_RIGHT | CW;
const uint8_t SCROLL_RIGHT_CCW = SCROLL_RIGHT | CCW;
const uint8_t SCROLL_RIGHT_PRESS = SCROLL_RIGHT | PRESS;
const uint8_t SCROLL_RIGHT_RELEASE = SCROLL_RIGHT | RELEASE;

const uint8_t SCROLL_CENTER_CW = SCROLL_CENTER | CW;
const uint8_t SCROLL_CENTER_CCW = SCROLL_CENTER | CCW;
const uint8_t SCROLL_CENTER_PRESS = SCROLL_CENTER | PRESS;
const uint8_t SCROLL_CENTER_RELEASE = SCROLL_CENTER | RELEASE;

const uint8_t BUTTON_NORTH_PRESS = BUTTON_NORTH | PRESS;
const uint8_t BUTTON_NORTH_RELEASE = BUTTON_NORTH | RELEASE;

const uint8_t BUTTON_SOUTH_PRESS = BUTTON_SOUTH | PRESS;
const uint8_t BUTTON_SOUTH_RELEASE = BUTTON_SOUTH | RELEASE;

const uint8_t BUTTON_EAST_PRESS = BUTTON_EAST | PRESS;
const uint8_t BUTTON_EAST_RELEASE = BUTTON_EAST | RELEASE;

const uint8_t BUTTON_WEST_PRESS = BUTTON_WEST | PRESS;
const uint8_t BUTTON_WEST_RELEASE = BUTTON_WEST | RELEASE;

#endif
