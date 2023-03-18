#include "seg.h"

int my7pins[7]{2, 3, 4, 5, 6, 7, 8};
seg my7(my7pins);

void setup() {
    my7.init();
}

void loop() {
    for (int i = 0; i < 10; ++i) {
        my7.display(i);
        delay(1000);
    }
}