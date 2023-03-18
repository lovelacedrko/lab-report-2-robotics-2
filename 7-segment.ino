// The goal of this program is to divide a 7-segment class into 3 files .ino , .cpp & .h


#include "seg.h"// includes the header file for the class

int my7pins[7]{2, 3, 4, 5, 6, 7, 8};
seg my7(my7pins);

void setup() {
    my7.init();// initializes the object
}

void loop() {
    for (int i = 0; i < 10; ++i) {
        my7.display(i);//display value of i
        delay(1000);// delay 1s
    }
}
