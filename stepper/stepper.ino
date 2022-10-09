#include "Stepper.h"

#define Ap 10  // A+ line
#define Am 11  // A- line
#define Bp 9   // B+
#define Bm 8   // B-

StepperMotor motor(Ap, Am, Bp, Bm);

void setup() { 
	motor.writeDegrees(180);
	motor.writeRadians(3.14);
}

void loop() { }