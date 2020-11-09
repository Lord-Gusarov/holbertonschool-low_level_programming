#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/*needed on some UNIX distribuitions*/
#include <sys/types.h>
#include <sys/stat.h>
/*==================================*/

/*task 0*/
ssize_t read_textfile(const char *filename, size_t letters);

/*task 1*/
int create_file(const char *filename, char *text_content);

/*TASK 2*/
int append_text_to_file(const char *filename, char *text_content);

#endif
