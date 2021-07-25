#include <IRremote.h> //including the IR LBRY
int RECV_PIN = 2; // the 'OUT/DAT' pin
IRrecv messagerec(RECV_PIN); //renaming IRrec to messagerec
decode_results results;
void setup()
{
Serial.begin(9600);
messagerec.enableIRIn();
}
void loop() {

if (messagerec.decode(&results))// Returns 0 if no data ready, 1 if data ready.
{
int value = results.value;// Results of decoding are stored in result.value
Serial.println(" ");
Serial.print("Code: ");
Serial.println(results.value); //prints the decoded message
Serial.println(" ");
switch(value){
  case 1216381055:
  Serial.print("OBJECT DETECTED!");

}
messagerec.resume(); // Restart the ISR state machine and Receive the next value
}
}
