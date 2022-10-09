#include "RadianServo.h"
#include "Potentiometer.h"

RadianServo servo(3);
Potentiometer pot(A0);

void setup(){
  Serial.begin(9600);
  servo.setup();
}

void loop(){
  float radians = pot.readRadians();
  servo.moveToRadians(radians);
  delay(100);
}