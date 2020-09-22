#include "holberton.h"
/**
 *jack_bauer - print every minute of the day of jack bauer
 *
 *Return : --nothing--
 */
void jack_bauer(void)
{
	int h1, h2, m1, m2;
	int h2_limit = 9;

	for (h1 = 0; h1 <= 2 ; h1++)
	{
		if (h1 == 2)
			h2_limit = 3;
		for (h2 = 0; h2 <= h2_limit; h2++)
			for (m1 = 0; m1 <= 5; m1++)
				for (m2 = 0; m2 <= 9; m2++)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(m1 + '0');
					_putchar(m2 + '0');
					_putchar('\n');
				}
	}
}
