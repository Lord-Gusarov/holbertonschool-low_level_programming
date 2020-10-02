#include "holberton.h"

/**
 *leet - encodes a string into 1337
 *@s: string to be encoded
 *
 *Return: encoded string
 */
char *leet(char *s)
{
	int i, ii;

	char ch[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
		for (ii = 0; ii <= 9; ii++)
			if (s[i] == ch[ii])
				s[i] = leet[ii];
	return (s);
}
