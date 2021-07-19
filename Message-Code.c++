/* This was only made for fun!
 I do have an Idea on what I can use this for
 Maybe a machine or robot that gives random messages each day!
*/
#include <LiquidCrystal.h> 
int Contrast=0;
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  

 void setup()
 {
    analogWrite(6,Contrast);
     lcd.begin(16, 2);
  } 
     void loop()
 { 
     lcd.setCursor(0, 0);
     lcd.print("Hello World!");
   
    lcd.setCursor(0, 1);
     lcd.print("I am B0B-E");
 }
