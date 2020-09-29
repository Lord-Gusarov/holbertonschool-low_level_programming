#include "holberton.h"

/**
 *_strcpy - copies the string pointed by src to buffer pointed by dest
 *@src: string pointer to copy from
 *@dest: buffer to to copy to
 *
 *Return: the pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = *(src + i);

	return (dest);
}
