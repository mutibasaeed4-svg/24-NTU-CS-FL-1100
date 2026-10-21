// Week 6 pwm
// Name: Mutiba Saeed
// Reg no: 24-NTU-CS-FL-1100
#include <Arduino.h>

const int ledPin = 2;  
const int freq = 5000;      
const int ledChannel = 0;   
const int resolution = 8;   

void setup() {
 
  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(ledPin, ledChannel);
}

void loop() {
  
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    ledcWrite(ledChannel, dutyCycle);
    delay(10);
  }

  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    ledcWrite(ledChannel, dutyCycle);
    delay(10);
  }
}