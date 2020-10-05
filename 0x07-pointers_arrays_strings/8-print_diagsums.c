#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals of a square
 *matrix of integers
 *@a: square matrix
 *@size: size of the matrix
 *
 *Return: nothing
 */
void print_diagsums(int *a, int size)
{
	long int sum1 = 0, sum2 = 0;
	int x, y;

	for (x = 0, y = size - 1; x < size * size; x += size + 1, y += size - 1)
	{
		sum1 += a[x];
		sum2 += a[y];
	}

	printf("%ld, %ld\n", sum1, sum2);
}
