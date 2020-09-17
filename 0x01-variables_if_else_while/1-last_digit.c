#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 *main - Determines whether the last digit of a random generated number is a
 *       gretaer than 5, less than 6 or a zero
 *Return: (0) always zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/*My code*/
	int lastDigit = n % 10;

	printf("Last digit of %d is %d and is ", n, lastDigit);
	if (lastDigit == 0)
		puts("0");
	else if (lastDigit > 5)
		puts("greater than 5");
	else
		puts("less than 6 and not 0");

	/*End of my code*/
	return (0);
}
