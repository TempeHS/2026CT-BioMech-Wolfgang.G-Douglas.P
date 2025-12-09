#ifndef LED_CONTROLLER_H
#define LED_CONTROLLER_H

#include <Arduino.h>

void ButtondouglasBegin(uint8_t pin);
void ButtondouglasActivate();
void ButtondouglasDeactivate();
void ButtondouglasLoop();

void LEDdpigasBegin(uint8_t pin);
void LEDdpigasActivate();
void LEDdpigasDeactivate();
void LEDdpigasLoop();

void OLEDdouglasBegin(uint8_t pin);
void OLEDdouglasActivate();
void OLEDdouglasDeactivate();
void OLEDdouglasLoop();

void BuzzerWolfgangBegin(uint8_t pin);
void BuzzerWolfgangActivate();
void BuzzerWolfgangDeactivate();
void BuzzerWolfgangLoop();

void HeartRateClipWolfgangBegin(uint8_t pin);
void HeartRateClipWolfgangActivate();
void HeartRateClipWolfgangDeactivate();
void HeartRateClipWolfgangLoop();

#endif