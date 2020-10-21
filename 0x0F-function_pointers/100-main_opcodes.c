#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the opcodes of its own main function.
* @arg_c: count of arguments
* @args: arguments
* Return: 0
*/
int main(int arg_c, char **args)
{
	int bts;

	if (arg_c != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bts = atoi(args[1]);
	if (atoi(args[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
