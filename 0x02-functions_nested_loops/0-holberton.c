#include "holberton.h"
/**
 *main - prints "Holberton" using _putchar
 *
 *Return: Always 0, succes
 */
int main(void)
{
	int i;

	char ch[9] = "Holberton";

	for (i = 0; i < 9; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');

	return (0);
}
