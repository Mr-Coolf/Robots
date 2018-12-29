#include <Servo.h>
#include <EEPROM.h>
#include "Otto.h"
Otto bot;
#define PIN_YL 2
#define PIN_YR 3
#define PIN_RL 4
#define PIN_RR 5
#define PIN_Buzzer 10

void setup() {
  Serial.begin(2000000);
  bot.init(PIN_YL,PIN_YR,PIN_RL,PIN_RR,true, PIN_NoiseSensor, PIN_Buzzer,PIN_Trigger, PIN_Echo);
  bot.home();
}

void loop() {
  bot.sing(11);
  bot.sing(11);
  bot.sing(11);
  bot.sing(6);
  bot.sing(6);
  bot.sing(6);
  bot.sing(6);
  bot.sing(14);
  bot.sing(14);
  bot.sing(7);
  bot.sing(7);
  bot.sing(7);
  bot.sing(7);
  bot.sing(7);
}
