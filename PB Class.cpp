// in this CPP File, the codes contain the implementation of the functions declared in a header file(.h).

#include "PButton.h"  // Includes the header file for the class

PButton::PButton(int pin) {  // Constructor for the PButton class which takes an integer parameter "pin"
  this->pin = pin;           // Setting the "pin" member variable of the object to the value of the parameter
}

void PButton::init() {   // Method of the PButton class which initializes the button
  pinMode(pin, OUTPUT);  // Setting pinMode to OUTPUT
}

void PButton::readState() {  // Method of the PButton class which reads the state of the button
  state = digitalRead(pin);  // Reads the state of the button using the "pin" member variable
  Serial.println(state);     // Prints the state of the button to the serial monitor
}
