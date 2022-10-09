#include "RadianServo.h"

float RadianServo::radiansToDegrees(float radians){
	return radians * (180 / 3.14);
}

void RadianServo::setup(){
	Serial.print("Setting up a servo on pin ");
	Serial.println(pin);
	servo.attach(pin);
}

void RadianServo::moveToRadians(float radians){
	float degrees = radiansToDegrees(radians);
	Serial.print("Move to ");
	Serial.print(degrees);
	Serial.println(" degrees");

	servo.write(degrees);
}