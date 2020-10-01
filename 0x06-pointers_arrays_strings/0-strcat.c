#include "holberton.h"

/**
 *_strcat - concatenates two strings
 *@dest: string we adding to
 *@src: string being added
 *
 *Return: pointer to the resulting string
 */
char  *_strcat(char *dest, char *src)
{
	int size_dest;
	int size_src;

	for (size_dest = 0; dest[size_dest] != '\0'; size_dest++)
		;
	for (size_src = 0; src[size_src] != '\0'; size_src++)
		dest[size_dest + size_src] = src[size_src];
	dest[size_dest + size_src] = '\0';

	return (dest);
}
