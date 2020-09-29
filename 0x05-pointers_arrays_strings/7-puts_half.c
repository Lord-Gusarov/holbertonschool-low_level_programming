#include "holberton.h"

/**
 *puts_half - prints the second half of a string
 *@str: string from whic to print
 *
 *Return: -nothing-
 */
void puts_half(char *str)
{
	int len, s_half = 0;

	for (len = 0; *(str + len) != '\0'; len++)
		;
	if (len % 2 == 1)
		s_half++;
	for (s_half += len / 2; s_half < len; s_half++)
		_putchar(*(str + s_half));
	_putchar('\n');
}
