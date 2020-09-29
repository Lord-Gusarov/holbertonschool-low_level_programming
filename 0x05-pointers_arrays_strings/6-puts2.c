#include "holberton.h"

/**
 *puts2 - prints every other character in a string
 *@str: string from wich to print
 *
 *Return: -nothing-
 */
void puts2(char *str)
{
	int i, len;

	for (len = 0; *(str + len) != '\0'; len++)
		;
	for (i = 0; i < len; i++)
		if (i % 2 == 0)
			_putchar(*(str + i));
	_putchar('\n');
}
