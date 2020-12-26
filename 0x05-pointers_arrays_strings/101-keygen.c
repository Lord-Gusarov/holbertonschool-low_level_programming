#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - generates random password from ascci
 * character with dec value range  [40, 126]
 *
 * Return: 0 if successfull
 */
int main(void)
{
	int zero = 40;
	int ch_lmt = 127;
	int range = ch_lmt - zero;
	int i, i2;
	int tmp = 0;
	int sum = 0, sum_goal = 2772;
	int pass[41];

	srand(time(NULL));

	for (i = 0; sum + ch_lmt < sum_goal; i++)
	{
		tmp = rand() % range + zero;
		sum += tmp;
		pass[i] = tmp;
	}

	tmp = sum_goal - sum;
	if (tmp)
		pass[i++] = tmp;

	for (i2 = 0; i2 < i; i2++)
		putchar(pass[i2]);

	return (0);
}
