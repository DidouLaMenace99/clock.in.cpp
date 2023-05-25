#include "clock.h"

int main () {
    while(true) {
        getTime();
        this_thread::sleep_for(chrono::seconds(1));
    }
    return 0;
}