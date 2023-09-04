#include <Wire.h>      //Library for using I2C 
#include <DHT.h>                    //Library for using DHT senso#define DHTPIN PA1 

#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);     //initilize object dht for class DHT with DHT pin with STM32 and DHT type as DHT11

void setup()

{
  Serial.begin(115200);
  dht.begin();          //Begins to receive Temperature and humidity values.                        
  delay(3000);

}

void loop()
{
float h = dht.readHumidity();       //Gets Humidity value
float t = dht.readTemperature();    //Gets Temperature value
Serialprint("Temp: ");
Serialprint(t);
Serialprint(" C");
Serial.print("Humid: ");
Serial.print(h);
Serial.print(" %");

}

