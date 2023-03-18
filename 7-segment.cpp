#include "seg.h"// Includes the header file for the class


seg::seg(int pins[7]){
   this->pins = pins; // Setting the "pin" member variable of the object to the value of the parameter
}

void seg::init(){
  for (int i = 0; i < 8; i++) {//using for loop t define pins as output
 pinMode(pins[i], OUTPUT);
}
}

void seg::display(int num){
  int numbers[10][7] = {//Arrays of 7 that contains the LEDs that must be turn on or off in order to display the number

{1, 1, 1, 1, 1, 1, 0},
{0, 1, 1, 0, 0, 0, 0},
{1, 1, 0, 1, 1, 0, 1},
{1, 1, 1, 1, 0, 0, 1},
{0, 1, 1, 0, 0, 1, 1},
{1, 0, 1, 1, 0, 1, 1},
{1, 0, 1, 1, 1, 1, 1},
{1, 1, 1, 0, 0, 0, 0},
{1, 1, 1, 1, 1, 1, 1},
{1, 1, 1, 1, 0, 1, 1}
};

  for (int i = 0; i < 7; i++) {
 digitalWrite(pins[i], numbers[num][i]);
 }
 }
