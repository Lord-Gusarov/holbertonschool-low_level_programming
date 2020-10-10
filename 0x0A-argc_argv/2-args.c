#include <stdio.h>

/**
 * main - print the number of arguments passed into it
 * @argc: size of @argv
 * @argv: command line arguments passed
 *
 * Return: 0 if sucesfully executed
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
