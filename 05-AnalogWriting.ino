int redPin=11;
int bright=0;
int time=500;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin, 0);
  delay(time);
  analogWrite(redPin, 20);
  delay(time);
  analogWrite(redPin, 40);
  delay(time);
  analogWrite(redPin, 60);
  delay(time);
  analogWrite(redPin, 80);
  delay(time);
  analogWrite(redPin, 100);
  delay(time);
  analogWrite(redPin, 120);
  delay(time);
  analogWrite(redPin, 140);
  delay(time);
  analogWrite(redPin, 160);
  delay(time);
  analogWrite(redPin, 180);
  delay(time);
  analogWrite(redPin, 200);
  delay(time);
  analogWrite(redPin, 220);
  delay(time);
  analogWrite(redPin, 240);
  delay(time);
  analogWrite(redPin, 255);
  delay(time);
  analogWrite(redPin, 240);
  delay(time);
  analogWrite(redPin, 220);
  delay(time);
  analogWrite(redPin, 200);
  delay(time);
  analogWrite(redPin, 180);
  delay(time);
  analogWrite(redPin, 160);
  delay(time);
  analogWrite(redPin, 140);
  delay(time);
  analogWrite(redPin, 120);
  delay(time);
  analogWrite(redPin, 100);
  delay(time);
  analogWrite(redPin, 80);
  delay(time);
  analogWrite(redPin, 60);
  delay(time);
  analogWrite(redPin, 40);
  delay(time);
  analogWrite(redPin, 20);
  delay(time);
  analogWrite(redPin, 0);
  delay(time);
}

