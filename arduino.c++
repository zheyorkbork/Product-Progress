//Code for our Arduino Project!
#include <Wire.h>

int const trigPin = 3;
int const echoPin = 2;
int duration = pulseIn(echoPin, HIGH);
int distanceCm = duration * 0.0340 / 2;
int distanceinch = duration * 0.01330 / 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds (10);
  digitalWrite(trigPin, LOW);
  Serial.print(distanceCm);
  Serial.println();
  delay(1000);
}
