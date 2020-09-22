#include <stdio.h>
/**
 *main - computes and prints the sum of all the
 *multiples of 3 and 5 below 1024
 *
 *Return: alwas zero
 */
int main(void)
{
	int i, sum = 0, limit = 1024;

	for (i = 0; i < limit; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("%i\n", sum);
	
	return (0);
}
