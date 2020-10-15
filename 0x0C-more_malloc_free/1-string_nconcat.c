#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first tring in the concatenation
 * @s2: string from whic to copy @n bytes
 * @n: desired amount of bytes from @s2
 *
 * Return: pointer to a newly allocated space in memory, NULL if
 * the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, m_idx = 0;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++, m_idx++)
		;
	for (i = 0; s2[i] != '\0' && i < n; i++, m_idx++)
		;

	m = malloc(sizeof(char) * m_idx + 1);
	if (m == NULL)
		return (NULL);
	m[m_idx] = '\0';

	m_idx = 0;
	for (i = 0; s1[i] != '\0'; i++, m_idx++)
		m[m_idx] = s1[i];
	for (i = 0; s2[i] != '\0' && i < n; i++, m_idx++)
		m[m_idx] = s2[i];

	return (m);
}
