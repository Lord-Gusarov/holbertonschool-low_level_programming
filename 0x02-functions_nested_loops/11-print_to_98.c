#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - prints all natural numbers from 'n' to 98
 *followed by a new line
 *@n: starting number
 *
 *Return: --nothing--
 */
void print_to_98(int n)
{
	int i = 1;

	if (n > 98)
		i = -1;
	printf("%i", n);
	if (n != 98)
	{
		while (n != 98)
		{
			n += i;
			printf(", %i", n);
		}
	}
	printf("\n");
}
