#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to copy
 * @s2: string to add righgt behind @s1
 *
 * Return: <Del>point to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and
 * null terminated, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, m_idx, m_len = 0;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++, m_len++)
		;
	for (i = 0; s2[i] != '\0'; i++, m_len++)
		;

	m = malloc(sizeof(char) * m_len + 1);
	if (m == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		m[i] = s1[i];
	m_idx = i;
	for (i = 0; s2[i] != '\0'; i++, m_idx++)
		m[m_idx] = s2[i];
	m[m_idx] = '\0';

	return (m);
}
