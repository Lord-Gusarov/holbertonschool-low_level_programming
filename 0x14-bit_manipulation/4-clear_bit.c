#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to modify
 * @index: position to be set to 0
 * Return: 1 if succes, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b = 1;

	if (index > 32)
		return (-1);

	b = b << index;

	if ((b & *n) == 1)
		*n -= b;

	return (1);
}
