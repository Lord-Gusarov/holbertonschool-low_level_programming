#include "holberton.h"

/**
 *cap_string - capitalizes the first letter of all words in a string
 *@str: string to be capitalized
 *
 *Return: capitalized string
 */
char *cap_string(char *str)
{
	int i, ia, sep_found = 1;
char a[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (sep_found)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			sep_found = 0;
		}
		for (ia = 0; a[ia] != '\0'; ia++)
		{
			if (str[i] == a[ia])
			{
				sep_found = 1;
				break;
			}
		}
	}

	return (str);

}
