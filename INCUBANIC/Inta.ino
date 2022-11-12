#include "LiquidCrystal_I2C-master/LiquidCrystal_I2C.h"
#include "dht/DHT.h"

LiquidCrystal_I2C lcd(0x27,16,2);
#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

DHT dht_1(5,22);

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}
