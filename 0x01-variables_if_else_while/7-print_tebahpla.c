#include <stdio.h>

/**
 *main - print the whole alphabet in lowercase and in reverse
 *
 *Return: always zero
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');

	return (0);
}
