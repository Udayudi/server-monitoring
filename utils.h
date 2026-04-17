#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>
#include <sys/statvfs.h>

void get_cpu_usage();
void get_memory_usage();
void get_disk_usage();
void get_processes();

#endif