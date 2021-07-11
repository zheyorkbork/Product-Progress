const int trigPin = 7;
const int echoPin = 4;
int distance;
long duration;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;
  if (distance <= 50 && distance >= 20)
  {
  digitalWrite(13, HIGH);
  }
  else
  {
  digitalWrite(13, LOW);
  }
  Serial.print(distance);
  delay(1000);
  Serial.println();
  // Serial.print(duration);
  delay(1000);
  // Serial.println();
//  if(distance <= 20)
//  {
//  digitalWrite(2, HIGH);
//  tone(buzz, 2000);
//  delay(100);
//  noTone(buzz);
//  delay(100);
//  tone(buzz, 2000);
//  delay(100);
//  noTone(buzz);
//  delay(100);
//  tone(buzz, 2000);
//  delay(100);
//  noTone(buzz);
//  tone(buzz, 2000);
//  delay(100);
//  noTone(buzz);
//  delay(100);
//  }
}
