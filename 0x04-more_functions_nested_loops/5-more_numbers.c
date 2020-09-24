#include "holberton.h"

/**
 *more_numbers - prints the numbers 0 to 14 ten times followed by a new line
 *
 *Return: --nothing--
 */
void more_numbers(void)
{
	int i, t;

	for (t = 0; t < 10; t++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
