#include "holberton.h"
#include <stdio.h>
#include <ctype.h>
/**
 *print_buffer -  The function must print the content of size
 *bytes of the buffer pointed by b, The output should print
 *10 bytes per line. Each line starts with the position of
 *the first byte of the line in hexadecimal (8 chars),
 *starting with 0. Each line shows the hexadecimal content
 *(2 chars) of the buffer, 2 bytes at a time, separated by a space
 * Each line shows the content of the buffer. If the
 * byte is a printable character, print the letter, if not, print '.'
 * @b: buffer to print
 * @size: size of b or the ammount of bytes of b to print.
 *
 * Return : -nothing-
 */
void print_buffer(char *b, int size)
{
	int i, ii;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (ii = i; ii < i + 10; ii += 2)
		{
			if (ii < size)
				printf("%02x", b[ii]);
			else
				printf("  ");
			if (ii + 1 < size)
				printf("%02x", b[ii + 1]);
			else
				printf("  ");
			printf(" ");
		}
		for (ii = i; ii < i + 10 && ii < size; ii++)
		{
			if (!isprint(b[ii]))
				putchar('.');
			else
				putchar(b[ii]);
		}
		putchar('\n');
	}
}
