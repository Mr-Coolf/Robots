#include <Servo.h>
Servo servo_5;
Servo servo_4;
Servo servo_3;
Servo servo_2;
int pos = 0;

void setup() {
  servo_5.attach(11);
  servo_4.attach(9);
  servo_3.attach(6);
  servo_2.attach(3);
}

void loop() {
  for (pos=60; pos <= 120; pos += 1) {
    servo_5.write(60);
    servo_4.write(60);
    servo_3.write(60);
    servo_2.write(60);
    delay(7);
  }
  for (pos = 120; pos >= 60; pos -= 1) {
    servo_5.write(120);
    servo_4.write(120);
    servo_3.write(120);
    servo_2.write(120);
    delay(7);
  }
}
