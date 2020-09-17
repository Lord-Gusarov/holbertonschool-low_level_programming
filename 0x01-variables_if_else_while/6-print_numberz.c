#include <stdio.h>

/**
 *main - prints all the digits of base 10
 *
 *Return: always zero (succes)
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar(ch + '0');
	}

	putchar('\n');

	return (0);
}
