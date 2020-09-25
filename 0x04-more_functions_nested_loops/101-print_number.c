#include "holberton.h"

/**
 *print_number - print any integer character by character
 *@n: integer to be printed
 *
 *Return: -nothing-
 */
void print_number(int n)
{
	int c = 1;
	int h;

	while (n / (c * 10) != 0)
		c = c * 10;
	if (n < 0)
		_putchar('-');
	while (c >= 1)
	{
		h = n / c;
		if (h < 0)
			_putchar(-h + '0');
		else
			_putchar(h + '0');
		n -= h * c;
		c = c / 10;
	}

}
