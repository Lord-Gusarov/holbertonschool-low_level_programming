#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to modify
 * @index: position to be set to 1
 * Return: 1 if succes, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b = 1;

	if (index > 32)
		return (-1);

	b = b << index;

	if ((b & *n) == 0)
		*n += b;

	return (1);
}
