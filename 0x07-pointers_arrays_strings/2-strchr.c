#include "holberton.h"

/**
 *_strchr - locates a character in a string
 *@s: string to search in
 *@c: the character to look for
 *
 *Return: a pointer to the first ocurrence of the character @c in the string
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	char *fch = '\0';

	while (*s)
	{
		if (*s == c)
		{
			fch = s;
			break;
		}
		s++;
	}

	return (fch);
}
