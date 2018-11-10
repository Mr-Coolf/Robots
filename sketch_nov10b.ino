int potPin = A4;
int ledPin = 3;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(2000000);
}

void loop() {
 int rotation;
 int brightness;
 rotation = analogRead(potPin);
 //brightness = rotation / 4;
 //analogWrite(ledPin, brightness);
 Serial.println(brightness);
 delay(2);

 if((rotation > 0) & (rotation < 355)){
  trtrt(LOW, HIGH, LOW);
 }
 if((rotation > 355) & (rotation < 700)){
  trtrt(LOW, LOW, HIGH);
 }
 if((rotation >  700) & (rotation < 1023)){
  trtrt(HIGH, LOW, LOW);
 }
}

void trtrt(int a, int b, int c){
  digitalWrite(2, a);
  digitalWrite(3, b);
  digitalWrite(4, c);
}

