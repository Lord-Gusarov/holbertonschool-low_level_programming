#include "holberton.h"

/**
 *print_square - prints a square using the "#", followed by a new line.
 *@size: size of the square
 *
 *Return: --nothing--
 */
void print_square(int size)
{
	int d1, d2;

	if (size > 0)
		for (d1 = 0; d1 < size; d1++)
		{
			for (d2 = 0; d2 < size; d2++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
