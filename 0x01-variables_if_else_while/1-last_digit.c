#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - prints a number and wether the last digit is greater than 5, less than
 * 6 or zero
 *
 *Return: 0 always zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int d = n % 10;

	printf("Last digit of %d is %d and is ", n, d);
	if (d == 0)
		puts("0");
	if (d > 5)
		puts("greater than 5");
	if (d < 6 && d !=0)
		puts ("less than 6 and not 0");
	
	return (0);
}
