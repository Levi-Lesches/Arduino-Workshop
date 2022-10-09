#include "Stepper.h"

StepperMotor::StepperMotor(int Ap, int Am, int Bp, int Bm) : 
	Ap(Ap), Am(Am), Bp(Bp), Bm(Bm) 
{
	pinMode(Ap,OUTPUT);
	pinMode(Am,OUTPUT);
	pinMode(Bp,OUTPUT);
	pinMode(Bm,OUTPUT);
}

void StepperMotor::writeStep() {
	delay(10);
	digitalWrite(Bm,LOW) ;  digitalWrite(Ap,HIGH);
	delay(10);
	digitalWrite(Ap,LOW) ;  digitalWrite(Bp,HIGH);
	delay(10);
	digitalWrite(Bp,LOW) ;  digitalWrite(Am,HIGH);
	delay(10);
	digitalWrite(Am,LOW) ;  digitalWrite(Bm,HIGH);
}

void StepperMotor::writeSteps(int steps) {
	for (int step = 0; step < steps; step++) writeStep();
}

float StepperMotor::degreesToSteps(float degrees) {
	return degrees * (200.0 / 360.0);
}

float StepperMotor::radiansToSteps(float radians) {
	return radians * (200.0 / 3.14);
}

void StepperMotor::writeDegrees(float degrees) {
	int steps = degreesToSteps(degrees);
	writeSteps(steps);
}

void StepperMotor::writeRadians(float radians) {
	int steps = radiansToSteps(radians);
	writeSteps(steps);
}
