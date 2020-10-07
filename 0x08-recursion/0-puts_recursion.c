#include "holberton.h"

/**
 *_puts_recursion - prints a string  char by char using recursion
 *@s: string to be printed
 *
 *Return: -nothing-
 */
void _puts_recursion(char *s)
{
	if (*s)
		_putchar(s[0]);
	else
		return;
	_puts_recursion(++s);
}
