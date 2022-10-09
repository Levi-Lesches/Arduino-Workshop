#include <Arduino.h>

class Potentiometer{
	private: 
		int pin; 

		float analogToRadians(float analog);

	public:
		Potentiometer(int pin) : pin(pin) {
			pinMode(pin, INPUT);
		}
		
		float readRadians();
};
