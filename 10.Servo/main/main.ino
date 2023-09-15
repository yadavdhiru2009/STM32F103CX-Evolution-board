/* 
 *  Author:dharmendra Kumar Yadav
 
 */
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

void setup() {
  myservo.attach(PA0);  // attaches the servo on pin 9 to the servo object
}

void loop()
 {
 myservo.write(180);            
 myservo.write(0);              
                        
  }

