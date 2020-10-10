#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers passed as arguments to the program
 * @argc: size of @argv
 * @argv: ought to containe the numbers to add
 *
 * Return: 0 if succesfuly executed, 1 if there are characters
 * that are not digits
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i = 0;

	while (--argc)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!isdigit(argv[argc][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}

	printf("%d\n", sum);
	return (0);
}
