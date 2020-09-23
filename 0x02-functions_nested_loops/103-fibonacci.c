#include <stdio.h>

/**
 *main - the sums of the even fibonacci numbers less than 4,000,000
 *
 *Return: always 0
 */
int main(void)
{
	long int sum = 2;
	long int f1 = 1;
	long int f2 = 2;
	long int next = 0;
	long int flimit = 4000000;


	while (next < flimit)
	{
		next = f1 + f2;
		f1 = f2;
		f2 = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%ld\n", sum);

	return (0);
}
