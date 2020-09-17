#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
*main - Prints wheter a random number is a zero,
*	is positive or negative
*Return: always (0) ..succes
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code */
	if (n == 0)
		puts("is zero");
	else if (n > 0)
		puts("is positive");
	else
		puts("is negative");

	/*===============*/
	return (0);
}
