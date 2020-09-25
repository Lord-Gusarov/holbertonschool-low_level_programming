#include <stdio.h>

/**
 *main - finds and prints the largest prime factor of 612852475143
 *
 *Return: always zero
 */
int main(void)
{
	long i;
	long to_fact = 612852475143;
	long lp = 1;

	for (i = 2; i <= to_fact; i++)
		while (to_fact % i == 0)
		{
			to_fact = to_fact / i;
			if (i > lp)
				lp = i;
		}
	printf("%ld\n", lp);

	return (0);
}
