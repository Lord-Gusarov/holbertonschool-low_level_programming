#include "holberton.h"

/**
 *_strlen - calculates the lenght of a string
 *@s: pointer to the string
 *
 *Return: length of the string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
		;

	return (len);
}
