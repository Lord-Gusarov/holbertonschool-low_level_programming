#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments being fed to the progra,
 * @ac: size of @av
 * @av: array with the arguments
 *
 * Return: pointer to new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	/*assing to @ac takes care of the spaces for'\n' and terminating NULL*/
	int m_len = ac;
	/*-----------*/
	int i, ii, m_idx;
	char *m;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (ii = 0; av[i][ii] != '\0'; ii++, m_len++)
			;

	m = malloc(sizeof(char) * m_len);
	if (m == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, m_idx++)
	{
		for (ii = 0; av[i][ii] != '\0'; ii++, m_idx++)
			m[m_idx] = av[i][ii];
		m[m_idx] = '\n';
	}
	m[m_len] = '\0';

	return (m);
}
