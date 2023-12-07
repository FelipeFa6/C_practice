#include <stdint.h>

typedef struct clock_t{
    uint8_t hour;
    uint8_t minute;
    uint8_t second;
} clock_t;

int countdown(clock_t * clock);
