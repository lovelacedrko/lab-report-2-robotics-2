// Header File that contains declarations for functions, classes, variables, and other constructs that can be used in a program.

#ifndef MOTORCLASS_H
#define MOTORCLASS_H  // Header guard to prevent multiple inclusions of this header file

#include <Arduino.h>  // includes the  arduino library because the header file does not recognize arduino's functions

class motorClass {
private:
  int PWMA;   // PWM pin for motor A
  int PWMB;   // PWM pin for motor B
  int AIN1;   // direction control pin 1 for motor A
  int BIN1;   // direction control pin 1 for motor B
  int speed;  // speed of the motors

public:
  motorClass(){};               // default constructor
  motorClass(int multiPins[]);  // constructor with parameter

  void init();                              // initialize motor pins
  void move(bool a, int x, bool b, int y);  // move motors with given speed and direction
  void setSpeed(int speed);                 // set the speed of the motors
  void forward();                           // move motors forward
  void backward();                          // move motors backward
  void left();                              // turn left
  void right();                             // turn right
  void stop();                              // stop motors
};

#endif// end of header file
