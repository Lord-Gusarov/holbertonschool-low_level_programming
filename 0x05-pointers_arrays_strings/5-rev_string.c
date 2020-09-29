#include "holberton.h"

/**
 *rev_string - reverses a string
 *@s: string to be reversed
 *
 *Return: -nothing-
 */
void rev_string(char *s)
{
	int s_pos = 0, f_pos;
	char c;

	for (f_pos = 0; *(s + f_pos) != '\0'; f_pos++)
		;
	--f_pos;

	for (; s_pos < f_pos; s_pos++, f_pos--)
	{
		c = *(s + s_pos);
		*(s + s_pos) = *(s + f_pos);
		*(s + f_pos) = c;
	}
}
