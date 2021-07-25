#include <IRremote.h>
#define PIN_SEND 2

const int trigPin = 7;
const int echoPin = 4;
long duration;
int distance;
void setup() {
  IrSender.begin((byte)PIN_SEND);
   // Pinning some pins bruh
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);
   Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
  if (distance <=150)
  {
    digitalWrite(13, HIGH);
    IrSender.sendNEC("Alert", true, 0);
  }
  else
  {
    digitalWrite(13, LOW);
  }
  Serial.println(distance);
  delay(1000);
  Serial.println();
  
}
