#include <IRremote.h>
#define PIN_MODE 3
/*if there is an error with library
 you have to download it */

//red led will light up when transmitter recieves data
const int IR = 3;
const int led = 6;

IRrecv irrecv(IR);
decode_results results;

    

void setup(){
    IRSender.begin(PIN_SEND);
    Serial.begin(9600);
    irrecv.enableIRIn();
    pinMode(led, OUTPUT);
     
}


void loop(){

    
    if(irrecv.decode(&results)){
   
       Serial.println(results.value);
       digitalWrite(led, HIGH);
       delay(200);
       digitalWrite(led, LOW);
       delay(1800);
       irrecv.resume();             
       }
        
}
