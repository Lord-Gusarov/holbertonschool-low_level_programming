#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - eturns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: function returns a pointer to the duplicated string. It returns
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *m;
	int i, size;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0') /*check NULL comparison*/
	{
		i++;
	}

	size = i;

	if (size == 0)
		return (NULL);

	m = malloc(sizeof(char) * (size + 1));
	if (m == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		m[i] = str[i];
		i++;
	}

	m[size] = '\0';

	return (m);
}
