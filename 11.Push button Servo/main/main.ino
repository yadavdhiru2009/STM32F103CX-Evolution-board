/* 
 *  Author:dharmendra Kumar Yadav
 
 */
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

void setup() {
  myservo.attach(PA0);  // attaches the servo on pin 9 to the servo object
  pinMode(PB0, INPUT);
}

void loop() {
  int bState= digitalRead(PB0);
  if(bState == HIGH)
  {
    myservo.write(180);            
                         
  }
  else
  {
    myservo.write(0);              
                        
  }
}
