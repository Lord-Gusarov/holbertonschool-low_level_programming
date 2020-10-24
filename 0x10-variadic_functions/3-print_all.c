#include "variadic_functions.h"
#define SEP printf("%s", sep)
#define SEP2 (sep = sep2)
/**
 * print_all - a functions that prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i;
	char *tmp, *sep = "", *sep2 = ", ";

	va_start(list, format);

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				SEP, printf("%c", va_arg(list, int));
				SEP2;
				break;
			case 'i':
				SEP, printf("%i", va_arg(list, int));
				SEP2;
				break;
			case 'f':
				SEP, printf("%f", va_arg(list, double));
				SEP2;
				break;
			case 's':
				{
					tmp = va_arg(list, char *);
					if (tmp == NULL)
						tmp = "(nil)";
					SEP, printf("%s", tmp);
					SEP2;
					break;
				}
		}
		i++;
	}

	printf("\n");
}
