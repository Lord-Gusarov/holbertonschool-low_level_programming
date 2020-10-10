#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: size of @argv
 * @argv: array with the command line arguments
 *
 * Return: 0 if succesfully complete
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
