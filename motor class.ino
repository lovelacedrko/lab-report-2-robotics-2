// The goal of this program is to create a motor class that is split into different files (.ino , .cpp, .h) or a library that will control the motors of robot car that can set the speed and perform movements in various directions.

#include "motorClass.h"  // Includes the header file that defines the motorClass class.

int motors[] = { 5, 6, 7, 8 };  // Defines an array of integers that represents the pins connected to the motor

motorClass robotMotor(motors);  // Creates an instance of the motorClass and initializes it with the motor pins

void setup() {        // Setup function - runs once at the start of the program
  robotMotor.init();  // Initializes the motorClass instance by setting the motor pins as outputs
}

void loop() {                // Loop function - runs repeatedly while the program is running
  robotMotor.setSpeed(255);  // Sets the speed of the motorClass instance to maximum (255)

  robotMotor.forward();  // Moves the robot forward
  delay(1000);           // Delays the program for 1 second (1000 milliseconds)

  robotMotor.backward();  // Moves the robot backward
  delay(1000);            // Delays the program for 1 second (1000 milliseconds)

  robotMotor.left();  // Turns the robot left
  delay(1000);        // Delays the program for 1 second (1000 milliseconds)

  robotMotor.right();  // Turns the robot right
  delay(1000);         // Delays the program for 1 second (1000 milliseconds)

  robotMotor.stop();  // Stops the robot
  delay(1000);        // Delays the program for 1 second (1000 milliseconds)
}
