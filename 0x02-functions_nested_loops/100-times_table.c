#include "holberton.h"
/**
 *print_times_table - prints the n times table for 0 < n < 16
 *@n: the last table to print starting with 0 ending inm 'n'
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
	int i, ii, num;

	for (i = 0; i <= n; i++)
	{
		for (ii = 0; ii <= n; ii++)
		{
			num = i * ii;
			if (num > 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(num / 100 + '0');
				num = num - (num / 100) * 100;
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			else if (num > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			else if (ii != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
			else
				_putchar('0');
		}
		_putchar('\n');
	}
	}
}
