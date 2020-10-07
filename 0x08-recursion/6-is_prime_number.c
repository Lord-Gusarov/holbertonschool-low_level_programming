#include "holberton.h"

/**
 * is_prime_number - determines if a number is a prime number
 * @n: number to analyze
 *
 * Return: 1 if the input integer is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (is_prime_helper(2, n));
}

/**
 * is_prime_helper - helps determine recursively if a number is prime
 * @x: current iteration, number to check if it divedes @n with remainder 0
 * @n: number being nalyzed
 *
 * Return: 1 if the input integer is a prime number, 0 otherwise
 */
int is_prime_helper(int x, int n)
{
	if (n % x == 0)
		return (0);
	if (x > n / 2)
		return (1);
	return (is_prime_helper(++x, n));
}
