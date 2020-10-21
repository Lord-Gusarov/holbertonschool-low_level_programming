#include "3-calc.h"
#define pError printf("Error\n")
/**
 * main -performs simple math operations based on arguments given when executed
 * @arg_c: count of arguments passed the program
 * @arg: pointer containing the arguments given when the program was called
 *
 * Return: 0 If succes, 98 if number of arguments is wrong, 99 if the
 * operator is none of the above or 100 if the user tries to divide by 0
 */
int main(int arg_c, char **arg)
{
	int a, b;
	int (*fop_ptr)(int, int);

	if (arg_c != 4)
	{
		pError;
		exit(98);
	}

	fop_ptr = get_op_func(arg[2]);
	if (fop_ptr == NULL || arg[2][1] != '\0')
	{
		pError;
		exit(99);
	}

	a = atoi(arg[1]);
	b = atoi(arg[3]);

	if ((arg[2][0] == '/' || arg[2][0] == '%') && b == 0)
	{
		pError;
		exit(100);
	}

	printf("%d\n", fop_ptr(a, b));
	return (0);
}

