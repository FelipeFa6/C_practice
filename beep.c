#include <fcntl.h>
#include <linux/kd.h>
#include <stdint.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>

#include "beep.h"

void beep(uint16_t frequency, uint16_t duration) {
    uint16_t fd = open("/dev/console", O_WRONLY);
    if (fd == -1) {
        perror("Error opening console");
        return;
    }

    ioctl(fd, KIOCSOUND, frequency);
    usleep(duration * 1000);

    ioctl(fd, KIOCSOUND, 0);
    close(fd);
}
