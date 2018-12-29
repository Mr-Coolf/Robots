#include <Servo.h>
#include <EEPROM.h>
#include "Otto.h"
Otto bot;
#define PIN_YL 2
#define PIN_YR 3
#define PIN_RL 4
#define PIN_RR 5

void setup() {
  Serial.begin(2000000);
  bot.init(PIN_YL,PIN_YR,PIN_RL,PIN_RR,true);
  bot.home();
}

void loop() {
  bot.move(1,100,100);
  bot.move(1,100,100);
  bot.move(1,100,100);
  bot.move(1,100,100);
  bot.move(1,100,100);
  delay(50);
  bot.move(2,100,100);
  bot.move(2,100,100);
  bot.move(2,100,100);
  bot.move(2,100,100);
  bot.move(2,100,100);
}
