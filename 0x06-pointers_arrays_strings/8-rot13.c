#include "holberton.h"

/**
 *rot13 - encodes a string using rot13
 *@s: string to be encoded
 *
 *Return: encoded string
 */
char *rot13(char *s)
{
	int i, ii;

	char org[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
		for (ii = 0; org[ii] != '\0'; ii++)
			if (s[i] == org[ii])
			{
				s[i] = rot[ii];
				break;
			}
	return (s);
}
