#include <stdio.h>
#include <stdlib.h>
/**
 * main - takes two numbers as arguments from the command
 * line and multiples them
 * @argc: size of @argv
 * @argv: command line arguments passed to the progran, should be two numbers
 *
 * Return: Error if two arguments were not recevied, returnin (1)
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
