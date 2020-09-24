#include "holberton.h"

/**
 *_isdigit - check for a digit (0 through 9)
 *@c: value to check
 *
 *Return: 1 if @c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
