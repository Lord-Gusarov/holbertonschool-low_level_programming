#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers withouth using
 * arrays, pointers long long, no GMP
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long p_f1 = 0, s_f1 = 1, p_f2 = 0, s_f2 = 2;
	unsigned long p_next = 0, s_next = 0, tmp_f1, tmp_f2;
	unsigned long factor = 1000000000;
	int n = 3;

	printf("1, 2, ");
	while (n <= 98)
	{
		p_next = (s_f1 + s_f2) / factor;
		p_next += (p_f1 + p_f2);
		s_next = (s_f1 + s_f2) % factor;

		p_f1 = p_f2;
		s_f1 = s_f2;


		p_f2 = p_next;
		s_f2 = s_next;
		if (p_next > 0)
		{
			printf("%lu", p_next);
			printf("%09lu", s_next);
		}
		else
			printf("%lu", s_next);
		if (n < 98)
			printf(", ");
		n++;
	}
	printf("\n");
	return (0);
}
