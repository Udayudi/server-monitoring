#include "utils.h"
int main() {
    while (1)
        {
            system("clear");
            printf("********** Server Monitoring ***********\n\n");
            get_cpu_usage();
            get_memory_usage();
            get_disk_usage();
            get_processes();
            printf("\nRefreshing in 20 Seconds.....!\n");
            sleep(20);
        }
    return 0;     
}