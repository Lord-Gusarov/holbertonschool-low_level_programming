#include <stdio.h>

/**
 *main - prints the first 50 fibonacci numbers starting with 1 and 2
 *
 *Return: always 0
 */
int main(void)
{
	int count;
	long int f1 = 1;
	long int f2 = 2;
	long int next;
	int flimit = 50;

	for (count = 2; count <= flimit; count++)
	{
		next = f1 + f2;
		f1 = f2;
		f2 = next;
		printf("%lu", next);
		if (count < flimit)
			printf(", ");
	}
	printf("\n");

	return (0);
}
