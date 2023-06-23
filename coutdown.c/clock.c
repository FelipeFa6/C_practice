#include <stdio.h>
#include <unistd.h>

#include "clock.h"

int countdown(clock_t * clock) {
    while (1) {
        printf("%uh:%um:%us.\n", clock->hour, clock->minute, clock->second);
        sleep(1);

        if (clock->second == 0) {
            if (clock->minute == 0) {
                if (clock->hour == 0) {
                    break;
                }
                clock->hour--;
                clock->minute = 59;
            } else {
                clock->minute--;
            }
            clock->second = 59;
        } else {
            clock->second--;
        }

    }
    return 1;
}
