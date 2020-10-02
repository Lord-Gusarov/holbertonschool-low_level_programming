#include "holberton.h"

/**
 *print_number - print and integer character by character
 *@n: integer to print
 *
 *Return: -nothing-
 */
void print_number(int n)
{
	unsigned int f, u_n;

	if (n < 0)
	{
		_putchar('-');
		u_n = -n;
	}
	else
		u_n = n;

	for (f = 10; u_n / f >= 1; f *= 10)
		;
	for (f /= 10; f >= 1; f /= 10)
	{
		_putchar((u_n / f) + '0');
		u_n -= (u_n / f) * f;
	}
}
