#include "holberton.h"

/**
 * _strlen_recursion - return the length of a string using recursion
 * @s: string  whole length if desired
 *
 * Return: length of @s
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
