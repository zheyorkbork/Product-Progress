int motorPin = 2;
 
void setup()  
{
    pinMode(motorPin, OUTPUT );
}
 
void loop()  
{
    digitalWrite(motorPin, HIGH);
    delay(1000);
    digitalWrite(motorPin, LOW);
    delay(1000);
}
