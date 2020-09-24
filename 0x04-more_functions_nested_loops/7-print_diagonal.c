#include "holberton.h"

/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: the length of the diagonal measured in characters of '\'
 *
 *Return: --nothing--
 */
void print_diagonal(int n)
{
	int i, spaces;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (spaces = 0; spaces < i; spaces++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
