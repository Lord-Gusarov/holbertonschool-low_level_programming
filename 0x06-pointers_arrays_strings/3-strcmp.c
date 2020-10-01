#include "holberton.h"

/**
 *_strcmp - compares two strings;
 *@s1: first string to compare
 *@s2: second string to compare
 *
 *Return: a number less than, equal to or greater than zero if @s1 is less
 *than, equal or greater than @s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++)
		;
	return (s1[i] - s2[i]);
}
