#include "holberton.h"

/**
 * wildcmp - compares two string and returns 1 if the strings can be considered
 * identical taking into account the wildcard '*'
 * @s1: a string to compare
 * @s2: a string to compare
 *
 * Return i if the string can be considred identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1)
	{
		if (*s2 == '*')
		{
			return (wildcmp(s1, (s2 + 1)));
		}
		return (!*s2);
	}
	if (*s2 == '*')
	{
		return (wildcmp((s1 + 1), s2) || wildcmp(s1, (s2 + 1)));
	}
	if (*s1 == *s2)
	{
		return (wildcmp((s1 + 1), (s2 + 1)));
	}
	return (0);
}
