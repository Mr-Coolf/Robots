#include <Servo.h>
int tP = 11;
int eP = 12;
bool rejum;
Servo upservo;
Servo downservo;
void setup() {
  Serial.begin (9600);
  pinMode(tP, OUTPUT);
  pinMode(eP, INPUT);
  upservo.attach(6);
  downservo.attach(9);
}

void loop() {
  long duration, distance;
  digitalWrite(tP, LOW);
  delayMicroseconds(5);
  digitalWrite(tP, HIGH);
  delayMicroseconds(10);
  digitalWrite(tP, LOW);
  duration = pulseIn(eP, HIGH);
  distance = (duration / 2) / 29.1;
  delay(50);
  Serial.print(distance);
  Serial.println(" cm");
  delay(200);
  if(distance<10){
    upservo.write(60);
    downservo.write(120);
    delay(300);
    upservo.write(120);
    downservo.write(60);
    delay(300);
  }
  else{
    upservo.write(90);
    downservo.write(90);
  }
}  
