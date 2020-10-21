#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_
#include <stdlib.h>
/*Holberton's putchar()*/
int _putchar(char);
/*Task 0*/
void print_name(char *name, void (*f)(char *));
/*Task 1*/
void array_iterator(int *array, size_t size, void (*action)(int));
/*Task 2*/
int int_index(int *array, int size, int (*cmp)(int));
#endif
