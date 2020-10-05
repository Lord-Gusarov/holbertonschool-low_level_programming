#include "holberton.h"

/**
 *_memset - a function that fills memory with a constant byte
 *@s: memory are to be modified
 *@b: the constant byte to write
 *@n: the first n bytes to be filled
 *
 *Return: pointer to the memory area of @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
