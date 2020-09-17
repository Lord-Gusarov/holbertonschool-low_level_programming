#include <stdio.h>

/**
 *main - print all the numbers of base 16 (digits)
 *
 *Return: always zero
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
