#include "holberton.h"

/**
 *_strncat - concatenates two strings
 *@dest: string we adding to
 *@src: string being added
 *@n: bytes from @src being added to @dest
 *
 *Return: pointer to the resulting string
 */
char  *_strncat(char *dest, char *src, int n)
{
	int size_dest, size_src;

	for (size_dest = 0; dest[size_dest] != '\0'; size_dest++)
		;
	for (size_src = 0; src[size_src] != '\0' && n > 0; size_src++, n--)
		dest[size_dest + size_src] = src[size_src];
	dest[size_dest + size_src] = '\0';

	return (dest);
}
