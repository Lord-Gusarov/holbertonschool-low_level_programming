#include "holberton.h"

/**
 *_memcpy - copies 'n' bytes from memory ares src to memory area dest
 *@dest: memory area to copy to
 *@src: memory area to copy from
 *@n: the 'n' bytes of memory to copy
 *
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		n--;
		dest[n] = src[n];
	}

	return (dest);
}
