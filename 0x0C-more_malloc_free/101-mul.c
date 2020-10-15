#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program tha multiplies two positive numbers in base 10
 * @ac: size of @av
 * @av:
 *
 * Return: 0 if succes, 98 if the number of arguments is incorrect
 */
int main(int ac, char **av)
{
	int n1_len = 0, n2_len = 0;
	char ch;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (n1_len = 0; av[1][n1_len] != '\0'; n1_len++)
	{
		ch = av[1][n1_len];
		if (ch < '0' || ch > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (n2_len = 0; av[2][n2_len] != '\0'; n2_len++)
	{
		ch = av[2][n2_len];
		if (ch < '0' || ch > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}

	return (0);
}
