#include "utils.h"

void get_disk_usage() {
    struct statvfs stat;

    if (statvfs("/", &stat) != 0) {
        perror("Failed to get disk usage");
        return;
    }

    unsigned long total = stat.f_blocks * stat.f_frsize;
    unsigned long free = stat.f_bfree * stat.f_frsize;
    unsigned long used = total - free;

    float disk_usage = (float)used / total * 100;

    printf("Disk Usage : %.2f%%\n ", disk_usage);
}