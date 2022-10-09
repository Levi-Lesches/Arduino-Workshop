#include "Potentiometer.h"

float Potentiometer::analogToRadians(float analog) {
	return analog * (3.14/1023);
}

float Potentiometer::readRadians() {
	int analog = analogRead(pin);
	return analogToRadians(analog);
}
