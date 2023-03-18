#ifndef SEG_H //if not defined
#define SEG_H //defining Header guard to prevent multiple inclusions of this header file

#include <Arduino.h>// Includes the Arduino library header file

class seg{//define 7-segment class

  private:
int *pins; // ""int*"" means a pointer to a variable whose datatype is integer
 


  public:
   seg(){};  // Default constructor for the 7-segment class
   seg(int pins[7]); // Constructor for the 7-segment class which takes an integer parameter "pins"

   void init();// Method to initialize the 7-segment
   void display(int num);
   
};




#endif// end of header file
