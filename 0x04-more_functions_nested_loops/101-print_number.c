#include "holberton.h"

/**
 *print_number - print and integer character by character
 *@n: integer to print
 *
 *Return: -nothing-
 */
void print_number(int n)
{
	unsigned int u_n;

	if (n < 0)
	{
		_putchar('-');
		u_n = -n;
	}
	else
		u_n = n;

	if (u_n / 10 != 0)
		print_number(u_n / 10);
	_putchar(u_n % 10 + '0');
}
