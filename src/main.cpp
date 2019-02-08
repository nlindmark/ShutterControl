#include <Arduino.h>

 int series = 240;
 int interval = 2000; //  microsec

void setup() {
  // put your setup code here, to run once:

  pinMode(D2, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(D2, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);                                       

  delay(10000);

 

}

void loop() {
  // put your main code here, to run repeatedly:

  

  if(series > 0){
     digitalWrite(D2, LOW);
     digitalWrite(LED_BUILTIN, LOW);
     delay(250);
     digitalWrite(D2, HIGH);
     digitalWrite(LED_BUILTIN, HIGH);
  
     delay(interval - 250);
     series--;

  } else {

     digitalWrite(LED_BUILTIN, LOW);
     delay(250);
     digitalWrite(LED_BUILTIN, HIGH);
     delay(250);

  }
}