/* 
 *  Author:dharmendra Kumar Yadav
 
 */

void setup() {
    pinMode(PB0, INPUT_ANALOG);
    pinMode(PB1, PWM);
}

void loop() {
    int sensorValue = analogRead(PB0);
    int ledFadeValue = map(sensorValue, 0, 4095, 0, 65535);  //  12 bit ADC to 16 bit PWM
    pwmWrite(PB1, ledFadeValue);
}
