// Header File that contains declarations for functions, classes & variables.

#ifndef PBCLASS_H
#define PBCLASS_H  //defining Header guard to prevent multiple inclusions of this header file

#include <Arduino.h>  // Includes the Arduino library header file

class PButton {  // Defines the PButton class

private:     
  int pin;    // Integer to hold the pin number
  int state;  // Integer to hold the state of the button

public:
  PButton(){};       // Default constructor for the PButton class
  PButton(int pin);  // Constructor for the PButton class which takes an integer parameter "pin"

  void init();       // Method to initialize the button
  void readState();  // Method to read the state of the button
};

#endif  // End of header file
