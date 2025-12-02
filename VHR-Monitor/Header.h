#ifndef LED_CONTROLLER_H
#define LED_CONTROLLER_H

#include <Arduino.h>

void ledControllerBegin(uint8_t pin);
void ledControllerActivate();
void ledControllerDeactivate();
void ledControllerLoop();

#endif