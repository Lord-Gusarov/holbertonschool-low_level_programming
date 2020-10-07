#include "holberton.h"

/**
 * factorial - return the factorial of a given number
 * @n: number to get the factorial of
 *
 * Return: an int that is the factorial of @n or -1 if input error (n < 0)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
