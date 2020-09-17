#include <stdio.h>

/**
 *main - prints lowercase alphabet except q and e
 *
 *Return: always zero (succes)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
