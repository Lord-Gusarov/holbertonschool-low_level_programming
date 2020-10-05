#include "holberton.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: string to search in
 *@accept: contains the bytes to search for
 *
 *Return: the numbers of bytes in the initial segment of @s
 *which consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int still = 1; /* :1 while all chars are still in @accept*/
	unsigned int c1 = 0, c2 = 0, i;

	while (still && *s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				c2++;
				break;
			}
		}
		if (c1 == c2)
			still = 0;
		c1 = c2;
		s++;
	}

	return (c1);
}
