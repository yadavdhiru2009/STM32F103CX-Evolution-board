/* 
 *  Author:dharmendra Kumar Yadav
 
 */ 
#define LED PC13
#define Button PA2


void setup() {

  pinMode(LED, OUTPUT);
  pinMode(Button, INPUT);
 

}

void loop() {
 int ButtonState = digitalRead(Button);
 if(ButtonState == HIGH)
 {
  digitalWrite(LED, HIGH);
 }
 else
 {
  digitalWrite(LED, LOW);
 }

}
