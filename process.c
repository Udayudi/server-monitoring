#include "utils.h"

void get_processes() {
    DIR *dir;
    struct dirent *entry;

    int count = 0;

    dir = opendir("/proc");

    while ((entry = readdir(dir)) !=NULL)
    {   
        // cheking if directory name is number (PID)
        if (atoi(entry->d_name) !=0){
            count++;
        }
    }
    
    closedir(dir);

    printf("Total Processes : %d\n ", count);
   
}