#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of the string str.
 * @str: string to duplicate
 *
 * Return: On success, the _strdup function returns a pointer to the duplicated
 * string. It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int len;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	dup = malloc((sizeof(char) * len) + 1);
	if (dup == NULL)
		return (NULL);

	while (len >= 0)
	{
		dup[len] = str[len];
		len--;
	}

	return (dup);
}
