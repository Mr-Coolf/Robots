#include <Servo.h>
Servo ar;
Servo se;
int pos=0;
void setup() {
  ar.attach(9);
  se.attach(6);
}

void loop() {
  for(pos = 1; pos <= 180; pos += 1) {
    ar.write(pos);
    se.write(pos);
    delay(5);
  }
  for(pos = 180; pos >= 1; pos -= 1) {
    ar.write(pos);
    se.write(pos);
    delay(5);
  }
}
