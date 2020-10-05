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
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	/* in case the character being look for is '\0' */
	if (*s == c)
		return (s);

	return ('\0');
}
