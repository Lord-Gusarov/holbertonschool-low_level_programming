#include <stdio.h>

/**
 *main - the number 00 to 99 separeted by comma and a space
 *
 *Return: alway 0
 */
int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 < 10; d1++)
	{
		for (d2 = 0; d2 < 10; d2++)
		{
			putchar(d1 + '0');
			putchar(d2 + '0');
			if ((d1 * 10 + d2) < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
