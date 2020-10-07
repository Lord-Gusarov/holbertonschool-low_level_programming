#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the integer for which to calculate the square root
 *
 * Return: the natural square root of @n or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(0, n));
}

/**
 * _sqrt_helper - helps the recursion  calling
 * @x: current value being checked to see if the natural sqr root of @n
 * @n: the number whose natural sqr root we searching for
 *
 * Return: the natural square root of @n or -1 if it doesn't exist
 */
int _sqrt_helper(int x, int n)
{
	if ((x * x) == n)
		return (x);
	if (x > (n / 2))
		return (-1);
	return (_sqrt_helper(++x, n));
}
