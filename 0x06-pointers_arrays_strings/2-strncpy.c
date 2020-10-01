#include "holberton.h"

/**
 *_strncpy - concatenates two strings
 *@dest: string we coppying to
 *@src: string being copied from
 *@n: bytes from @src being copied to @dest
 *
 *Return: pointer to the resulting string
 */
char  *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && n > i; i++)
		dest[i] = src[i];
	if (i < n)
		dest[i] = '\0';

	return (dest);
}
