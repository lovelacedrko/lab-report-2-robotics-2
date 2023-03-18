// CPP File that contains the implementation of the functions declared in a corresponding header file.

#include "motorClass.h"  // Includes the header file that defines the motorClass class.

motorClass::motorClass(int multiPins[]) {  // Constructor for the motorClass class that takes an array of integers as a parameter.
  PWMA = multiPins[0];                     // Assigns the first element of the array to the PWMA variable.
  PWMB = multiPins[1];                     // Assigns the second element of the array to the PWMB variable.
  AIN1 = multiPins[2];                     // Assigns the third element of the array to the AIN1 variable.
  BIN1 = multiPins[3];                     // Assigns the fourth element of the array to the BIN1 variable.
}

void motorClass::init() {  // Method to initialize the motor.
  pinMode(PWMA, OUTPUT);   // Sets the PWMA pin as an output.
  pinMode(PWMB, OUTPUT);   // Sets the PWMB pin as an output.
  pinMode(AIN1, OUTPUT);   // Sets the AIN1 pin as an output.
  pinMode(BIN1, OUTPUT);   // Sets the BIN1 pin as an output.
  pinMode(3, OUTPUT);      // Sets pin 3 as an output.
  digitalWrite(3, 1);      // Sets pin 3 to HIGH (turns on the motor driver).
}

void motorClass::move(bool a, int x, bool b, int y) {  // Method to move the motor.
  digitalWrite(AIN1, a);                               // Sets the AIN1 pin to the value of the "a" parameter (either HIGH or LOW).
  analogWrite(PWMA, x);                                // Sets the PWM value of the PWMA pin to the value of the "x" parameter (0-255).
  digitalWrite(BIN1, b);                               // Sets the BIN1 pin to the value of the "b" parameter (either HIGH or LOW).
  analogWrite(PWMB, y);                                // Sets the PWM value of the PWMB pin to the value of the "y" parameter (0-255).
}

void motorClass::setSpeed(int speed) {  // Method to set the speed of the motor.
  this->speed = speed;                  // Assigns the value of the "speed" parameter to the "speed" variable.
}

void motorClass::forward() {         // Method to move the motor forward.
  move(1, speed / 2, 1, speed / 2);  // Calls the "move" method with specific parameters to move the motor forward.
}

void motorClass::backward() {        // Method to move the motor backward.
  move(0, speed / 2, 0, speed / 2);  // Calls the "move" method with specific parameters to move the motor backward.
}

void motorClass::left() {            // Method to turn the motor left.
  move(1, speed / 3, 0, speed / 3);  // Calls the "move" method with specific parameters to turn the motor left.
}

void motorClass::right() {           // Method to turn the motor right.
  move(0, speed / 3, 1, speed / 3);  // Calls the "move" method with specific parameters to turn the motor right.
}

void motorClass::stop() {  // Method to stop the motor.
  move(0, 0, 0, 0);        // Calls the "move" method with specific parameters to stop the motor.
}
