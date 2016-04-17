#ifndef RMDUP_H
#define RMFUP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <errno.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

#define NAME_LENGTH 256
#define TRUE 1
#define FALSE 0

typedef struct file_info {
	char name[NAME_LENGTH];		// Name of file
	char path[NAME_LENGTH]; 	// Path to file
	unsigned long time_cg; 		// Time last modified
	unsigned long protection; 	// Permissions
} file_info;

int cmpFileTime (const void* elem1, const void* elem2);
int cmpFiles (const file_info* elem1, const file_info* elem2);

#endif