// The goal of this program is to divide a PB class into 3 files .ino , .cpp & .h

//this is the main File that contains an easier version of the code

#include "PButton.h"  // Includes the header file for the PButton class

PButton Button(13);  // Creates an instance of the PButton class called "Button" and initializes it with the pin number 13

void setup() {

  Serial.begin(9600);  // initialize serial comunication at 9600 bits per second
  Button.init();      // Initializes the  object by setting its pin mode to input
}

void loop() {

  Button.readState();  // Reads whether the "Button"  is pressed or not
}
