#include <Servo.h>
Servo servo_5;
Servo servo_4;
Servo servo_3;
Servo servo_2;

void setup() {
  servo_5.attach(11);
  servo_4.attach(9);
  servo_3.attach(6);
  servo_2.attach(3);
  servo_2.write(180);
  delay(1000);
}

void loop() {
  servo_3.write(120);
 // delay(1000);
  servo_2.write(60);
  delay(1000);
  servo_2.write(120);
 // delay(1000);
  servo_3.write(60);
  delay(1000);
}
