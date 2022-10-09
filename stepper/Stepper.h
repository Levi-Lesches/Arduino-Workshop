#include <Arduino.h>

class StepperMotor {
	private:
		int Ap, Am, Bp, Bm;

		void writeStep();
		void writeSteps(int steps);
		float degreesToSteps(float degrees);
		float radiansToSteps(float radians);

	public: 
		StepperMotor(int Ap, int Am, int Bp, int Bm);

		void writeDegrees(float degrees);
		void writeRadians(float radians);
};
