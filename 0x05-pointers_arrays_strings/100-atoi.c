#include "holberton.h"

/**
 *_atoi - converts a string to an integer, the number in the string can be
 *preceded by an infinite number of characters
 *@s: string from which to subtarct the first ocurrance of a number
 *
 *Return: the first continous int in a string
 */
int _atoi(char *s)
{
	int n = 0, sign = 1;
	int i, ch;

	/* strtd indicates if a conversion to integer has started*/
	int strtd = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		ch = *(s + i);
		if (strtd && (ch < '0' || ch > '9'))
			break;
		if (ch == '-')
			sign *= -1;
		if (ch >= '0' && ch <= '9')
		{
			strtd = 1;
			n = n * 10 + ch - 48;
		}
	}

	n *= sign;

	return (n);
}
