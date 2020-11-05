#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 4611686018427387904;
	int flag = 0;

	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (flag)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			flag = 1;
		}
		mask = mask >> 1;
	}

	if (!flag)
		_putchar('0');
}

/* converted max unsigne long int to binary
 * 1111111111111111111111111111111111111111111111111111111111111111
 * 100000000000000000000000000000000000000000000000000000000000000
 * removed a zero cause compiler complained
 */
