#include "holberton.h"
#include <stdio.h>

/**
 *exact_pre_str - tells wether the second string is contained entirely
 *in the first string at offset 0
 *@s1: string to analyze
 *@s2: second string to compare, string to look for at offset 0
 *
 *Return: 1 if exact match, 0 if not
 */
int exact_pre_str(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 == *s2);
}

/**
 *_strstr - find the first occurence of a substring
 *@haystack: string to search in
 *@needle: substring to look for
 *
 *Return: pointer to the beginning of the located substring,
 *or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (exact_pre_str(haystack, needle))
			return (haystack);
		haystack++;
	}
	if(*haystack == *needle)
		return (haystack);
	return ('\0');
}
