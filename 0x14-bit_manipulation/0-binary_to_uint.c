#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string to convert
 * Return: decimal value, 0 if it a char tha is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int i;
	int len = 0;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);

	for (len--, i = 1; len >= 0; len--, i *= 2)
		if (b[len] == '1')
			sum += i;

	return (sum);
}

