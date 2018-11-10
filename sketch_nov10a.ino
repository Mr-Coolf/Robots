void setup() {
  Serial.begin(2000000);
}

void loop() {
  int sensorNumber = analogRead(A4);
  Serial.println(sensorNumber);
  delay(1);
}
