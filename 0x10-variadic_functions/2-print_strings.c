#include "variadic_functions.h"

/**
 * print_strings - prints the indefineite amount of strings passed as
 * parameters sperated by the char sequence specified
 * @separator: the string to be printed between strings
 * @n: count of variadic parameters passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
char *holder;

	if (separator == NULL)
		separator = "";

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		holder = va_arg(list, char *);
printf("%s", holder == NULL ? "(nil)" : holder);
		if (i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");
}

