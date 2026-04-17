#include "utils.h"

void get_memory_usage() {
    FILE *fp;
    long total, free, buffers, cached, available;

    fp = fopen("/proc/meminfo", "r");
    fscanf(fp, " MemTotal: %ld kB", &total);
    fscanf(fp, " MemFree: %ld kB", &free);
    fscanf(fp, " Buffers: %ld kB", &buffers);
    fscanf(fp, " Cached: %ld kB", &cached);
    fscanf(fp, " MemAvailable: %ld kB", &available);
    fclose(fp);

    long used = total - free - buffers - cached;

    float mem_usage = (float)used / total * 100;

    printf("Memory Usage : %.2f%%\n ", mem_usage);
}