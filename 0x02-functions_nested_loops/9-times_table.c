#include "holberton.h"

/**
 *times_table - prints the the multiplications table from 0 to 9, 9 places
 *
 *Return: --nothing--
 */
void times_table(void)
{
	int c, l, p, next;

	for (l = 0; l < 10; l++)
		for(c = 0; c < 10; c++)
		{
			p= l * c;
			next = l * (c + 1);
			if ( p < 10)
			{
				_putchar(p + '0');
				if (c < 9)
				{
					_putchar(',');
					_putchar(' ');
					if (next < 10)
						_putchar(' ');
				}
			}
			else
			{
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
				if (c < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			if (c == 9)
				_putchar('\n');
		}
}
