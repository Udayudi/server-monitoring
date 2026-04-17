#include "utils.h"

void get_cpu_usage() {
    FILE *fp;
    long user1, nice1, system1, idle1;
    long user2, nice2, system2, idle2;

    fp = fopen("/proc/stat", "r");
    fscanf (fp, " cpu %ld %ld %ld %ld", &user1, &nice1, &system1, &idle1);
    fclose(fp);

    sleep(1);

    fp = fopen("/proc/stat", "r");
    fscanf (fp, " cpu %ld %ld %ld %ld", &user2, &nice2, &system2, &idle2);
    fclose(fp);

    long total1 = user1 + nice1 + system1 + idle1;
    long total2 = user2 + nice2 + system2 + idle2;

    long total_diff = total2 - total1;
    long idel_diff = idle2 - idle1;


    float cpu_usage = (float)(total_diff - idel_diff) / total_diff * 100;

    printf("CPU Usage : %.2f%%\n ", cpu_usage);
}