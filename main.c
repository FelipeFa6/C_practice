#include <stdio.h>
#include <stdint.h>

#include "beep.h"
#include "clock.h"

int main(){
    uint16_t frequency = 1000;
    uint16_t duration  = 500;
    struct clock_t clock      = { 0, 0, 5 };

    countdown(&clock);
    beep(frequency, duration);

    return 0;
}
