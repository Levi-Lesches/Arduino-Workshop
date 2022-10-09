#include <Arduino.h>
#include <Servo.h>

class RadianServo {
  private:
    // fields
    Servo servo;
    int pin;

    // functions
    float radiansToDegrees(float degrees);

  public:
    // constructor
    RadianServo(int pin) : pin(pin){}

    // functions
    void setup();
    void moveToRadians(float radians);
};