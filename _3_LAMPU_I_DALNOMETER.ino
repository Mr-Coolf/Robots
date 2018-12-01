#include <NewPing.h>

int eP = 9;
int tP = 8;
int led1 = 3;
int led2 = 4;
int led3 = 5;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(eP, INPUT);
  pinMode(tP, OUTPUT);
}

void loop() {
  long time, distance;
  digitalWrite(tP, LOW);
  delayMicroseconds(2);
  digitalWrite(tP, HIGH);
  delayMicroseconds(10);
  digitalWrite(tP, LOW);
  time = pulseIn(eP, HIGH);
  distance = (time / 58);
  Serial.println(distance);
  if (distance < 10) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  else if (distance < 20) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }
  else if (distance < 30) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }
}
