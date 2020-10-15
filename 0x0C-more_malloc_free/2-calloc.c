#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of @size bytes
 * each and returns a pointer to the allocated memory. The memory is set to zero.
 * @nmemb: number of members/blocks desired
 * @size: amount of bytes for each member/block
 *
 * Return: pointer to new allocated memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);

	return (m);
}
