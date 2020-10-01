#include "holberton.h"

/**
 *string_toupper - changes all lowercase letters to uppercase
 *@str: a string
 *
 *Return: modified string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}
