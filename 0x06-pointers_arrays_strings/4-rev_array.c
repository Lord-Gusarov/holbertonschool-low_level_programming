#include "holberton.h"

/**
 *reverse_array - reverses the content of an array of integers
 *@a: an array of integers
 *@n: the number of elements to reverse
 *
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; n > i; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
