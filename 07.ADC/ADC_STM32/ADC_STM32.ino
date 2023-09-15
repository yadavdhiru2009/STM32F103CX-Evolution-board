/* 
 *  Author:dharmendra Kumar Yadav
 
 */
#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int potPin = PA0;
int potValue = 0;
int LED = PC13;


void setup() {

  pinMode(LED, OUTPUT);
  pinMode(potPin, INPUT_ANALOG);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(2,0);
  lcd.print("Dharmendra ()");


}

void loop() {
  potValue = analogRead(potPin);
  potValue = map(potValue, 0 , 4095, 0 , 1024);
  lcd.setCursor(0,1);
  lcd.print("Analog: ");
  lcd.print(potValue);
  lcd.print("   ");
  digitalWrite(LED, HIGH);
  delay(potValue);
  digitalWrite(LED, LOW);
  delay(potValue);

}
