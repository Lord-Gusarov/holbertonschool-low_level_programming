#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of bytes to separate
 *
 * Return: f malloc fails, the malloc_checked function
 * should cause normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	if (b == 0)
		exit(98);
	m = malloc(b);
	if (m == NULL)
		exit(98);

	return (m);
}
