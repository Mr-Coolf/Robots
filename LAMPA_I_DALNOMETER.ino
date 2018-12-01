int eP = 9;
int tP = 8;
int led = 3;

void setup() {
  pinMode(tP, OUTPUT);
  pinMode(eP, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(2000000);
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
    digitalWrite(led, HIGH);
  }
  else
    digitalWrite(led, LOW);
}
