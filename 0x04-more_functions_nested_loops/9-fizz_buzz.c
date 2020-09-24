#include <stdio.h>

/**
 *main - Write a program that prints the numbers from 1 to 100, followed
 *by a new line. But for multiples of three print Fizz instead of the number
 *and for the multiples of five print Buzz. For numbers which are multiples
 *of both three and five print FizzBuzz.
 *
 *Return: always 0, succes
 */
int main(void)
{
	int i;
	int limit = 100;

	for (i = 1; i <= limit; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		else
		{
			if (i % 3 == 0)
				printf("%s", "Fizz");
			if (i % 5 == 0)
				printf("%s", "Buzz");
		}
		printf(" ");
	}
	printf("\n");
}
