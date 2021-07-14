
#include <Stepper.h>
#include <Wire.h>
const int stepsPerRevolution = 90;
// change this to fit the number of steps per revolution
// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
const int trigPin = 7;
const int echoPin = 4;
long duration;
int distance;
void setup() {
   // The speed at the motor. Can be changed
   myStepper.setSpeed(500);
   // Pinning some pins bruh
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);
   pinMode(13, OUTPUT);
   pinMode(2, OUTPUT);
   // initialize the serial port:
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
  if (distance <=50)
  {
    digitalWrite(13, HIGH);
   // step one revolution in one direction:
   Serial.println("clockwise");
   myStepper.step(stepsPerRevolution);
   delay(500);
   // step one revolution in the other direction:
   Serial.println("counterclockwise");
   myStepper.step(-stepsPerRevolution);
   delay(500);
  }
  if (distance <=40)
   {
    digitalWrite(13, HIGH);
   // step one revolution in one direction:
   Serial.println("clockwise");
   myStepper.step(stepsPerRevolution);
   delay(250);
   // step one revolution in the other direction:
   Serial.println("counterclockwise");
   myStepper.step(-stepsPerRevolution);
   delay(250);
  }
  if (distance <=20)
    {
    digitalWrite(13, HIGH);
   // step one revolution in one direction:
   Serial.println("clockwise");
   myStepper.step(stepsPerRevolution);
   delay(125);
   // step one revolution in the other direction:
   Serial.println("counterclockwise");
   myStepper.step(-stepsPerRevolution);
   delay(125);
  }
  else
  {
    digitalWrite(13, LOW);
  }
  Serial.print(distance);
  delay(1000);
  Serial.println();
  
}
