#include <stdio.h>
/**
 *swap_int - swaps the value that teo int pointers point to
 *@a: first integer pointer
 *@b: second integer pointer
 *
 *Return: -nothing-
 */
void swap_int(int *a, int *b)
{
	int tmp = *b;

	*b = *a;
	*a = tmp;
}
