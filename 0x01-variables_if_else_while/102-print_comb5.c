#include <stdio.h>

/**
 *main - prints unique  possible combinations of two two-digits
 *
 *Return: alway 0
 */
int main(void)
{
	int d1, d2, d3, d4;

	int end1, end2;

	for (d1 = 0; d1 < 10; d1++)
	{
		for (d2 = 0; d2 < 10; d2++)
		{
			for (d3 = d1; d3 < 10; d3++)
			{
				for (d4 = d2 + 1 ; d4 < 10; d4++)
				{
				putchar(d1 + '0');
				putchar(d2 + '0');
				putchar(' ');
				putchar(d3 + '0');
				putchar(d4 + '0');

				end1 = d1 * 10 + d2;
				end2 = d3 * 10 + d4;
				if (!((end1 == 98) && (end2 == 99)))
				{
					putchar(',');
					putchar(' ');

				}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
