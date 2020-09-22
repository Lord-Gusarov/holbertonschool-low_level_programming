#include "holberton.h"
/**
 *print_last_digit - prints and returns the las digit of a number
 *@n: number from which to obtain the last digit
 *
 *Return: the last digit of @n
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = n * -1;
	_putchar(n + '0');

	return (n);
}
