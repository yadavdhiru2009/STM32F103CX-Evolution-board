/* 
 *  Author:dharmendra Kumar Yadav
 
 */
#define LED PC13
char data = 0;


void setup() {
  Serial1.begin(9600);
  pinMode(LED,OUTPUT);

}

void loop() {

  if(Serial1.available()> 0)
  {
    data  = Serial1.read();

    if(data == 'A')
    {
      digitalWrite(LED, HIGH);
      Serial1.print("LED ON\n");
    }
    if(data == 'a')
    {
     digitalWrite(LED, LOW);
     Serial1.print("LED OFF\n"); 
    }

 }

}
