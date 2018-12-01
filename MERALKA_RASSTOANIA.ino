#include <NewPing.h>

#define TRIGGER_PIN 11
#define MAX_DISTANCE 200
#define ECHO_PIN 12

NewPing arsen(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(2000000);
}

void loop() {
  delay(50);
  unsigned int us = arsen.ping_cm();
  Serial.print(us);
  Serial.println("cm");
}
