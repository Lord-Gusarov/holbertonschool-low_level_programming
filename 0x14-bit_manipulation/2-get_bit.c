#include "holberton.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number
 * @index: the index of the bit
 * Return: the bit or -1 if unable to fetch it
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 32)
		return (-1);

	b = n >> index;

	return (b & 1);
}
