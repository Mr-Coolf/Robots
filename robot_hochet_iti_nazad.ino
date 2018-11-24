#include <Servo.h>
Servo motor1;
Servo motor2;

void setup() {
  motor1.attach(9);
  motor2.attach(6);
}

void loop() {
  motor1.write(60);
  motor2.write(120);
  delay(300);

  motor1.write(120);
  motor2.write(60);
  delay(300);
}
