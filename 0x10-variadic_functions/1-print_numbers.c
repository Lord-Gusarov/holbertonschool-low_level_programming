#include "variadic_functions.h"

/**
 * print_numbers - prints the indefinite amount of numbers passed as
 * parameters sperated by the char sequence specified
 * @separator: the string to be printed between numbers
 * @n: count of variadic parameters passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator == NULL)
		separator = "";

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(list, int));
		if (i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");
}

