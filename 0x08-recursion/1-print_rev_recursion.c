#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse, char by
 * char using recursion
 * @s: string to be printed
 *
 * Return: -nothing-
 */
void _print_rev_recursion(char *s)
{
	if (!(*s))
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
