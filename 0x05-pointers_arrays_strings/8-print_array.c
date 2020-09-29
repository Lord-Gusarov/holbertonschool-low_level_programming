#include "holberton.h"
#include <stdio.h>

/**
 *print_array - prints 'n' elements of an array of integers
 *followed by a new line
 *@a: the array from wich to print
 *@n: the number of elements of the array to print
 *
 *Return: -nothing-
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", *(a + i));
		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
