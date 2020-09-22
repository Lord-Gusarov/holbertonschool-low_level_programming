#include "holberton.h"
/**
 *print_last_digit - prints and returns the las digit of a number
 *@n: number from which to obtain the last digit
 *
 *Return: the last digit of @n
 */
int print_last_digit(int n)
{
	int d = 0;

	if (n < 0)
		n = n * -1;
	d = n % 10;
	_putchar(d + '0');

	return (d);
}
