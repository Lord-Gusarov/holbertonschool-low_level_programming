#include "holberton.h"

/**
 *string_toupper - changes all lowercase letters to uppercase
 *@str: a string
 *
 *Return: modified string
 */
char *string_toupper(char *str)
{
	while(*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str -  32;
		}
		str++;
	}
	return (str);
}
