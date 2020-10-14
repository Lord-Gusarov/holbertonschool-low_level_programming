#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#
/**
 * create_array - creates an array of chars of specified size
 * initialized to a char
 * @size: size of new array
 * @c: char with which to initialize all spaces in the array
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *m;

	if (size == 0)
		return (NULL);

	m = malloc(sizeof(char) * size);
	if (m == NULL)
		return (NULL);
	while (size > 0)
		m[--size] = c;

	return (m);
}
