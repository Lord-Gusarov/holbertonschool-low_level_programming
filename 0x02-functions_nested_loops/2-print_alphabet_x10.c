#include "holberton.h"
/**
 *print_alphabet_x10 -  print the alphabet in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i++ < 10)
	{
	for (ch = 'a'; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
	}
}
