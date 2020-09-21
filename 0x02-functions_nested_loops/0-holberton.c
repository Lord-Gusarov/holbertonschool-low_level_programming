#include <stdio.h>
#define sizeOf_ch 9
/**
 *main - prints "Holberton" using _putchar
 *
 *Return: Always 0, succes
 */
int main(void)
{
	int i;

	char ch[sizeOf_ch] = "Holberton";

	for (i = 0; i < sizeOf_ch; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');

	return (0);
}
