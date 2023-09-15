/* 
 *  Author:dharmendra Kumar Yadav
 
 */
#include <Wire.h>
#include <Adafruit_BMP280.h>
#include <LiquidCrystal_I2C.h>

Adafruit_BMP280 bmp; // I2C
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  bmp.begin();
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Dharmendra");
  lcd.setCursor(0, 1);
  lcd.print("  Kumar");


  /* Default settings from datasheet. */
  bmp.setSampling(Adafruit_BMP280::MODE_NORMAL,     /* Operating Mode. */
                  Adafruit_BMP280::SAMPLING_X2,     /* Temp. oversampling */
                  Adafruit_BMP280::SAMPLING_X16,    /* Pressure oversampling */
                  Adafruit_BMP280::FILTER_X16,      /* Filtering. */
                  Adafruit_BMP280::STANDBY_MS_500); /* Standby time. */

  delay(2000);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(bmp.readTemperature());
  lcd.print(" ");
  lcd.write(B11011111);   // print degree symbol
  lcd.print("C");


  lcd.setCursor(0, 1);
  lcd.print("P:");
  lcd.print(bmp.readPressure()/100);
  lcd.print(" hPa");

  delay(1000);
}
