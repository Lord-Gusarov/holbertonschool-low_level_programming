#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(int n);

int main(void)
{
	int a = 999, b = 999, r = 0, big = 0;

	for (a = 999; a > 99; a--)
	{
		for (b = 999; b > 99; b--)
		{
			r = a * b;
			if (r > big)
			{
				if (isPalindrome(r))
				{
					printf("a = %d,  b = %d\n", a, b);
					big = r;
				}
			}
		}
	}

	printf("%d\n", big);

	return (0);
}

int isPalindrome(int n)
{
	char str[10] = {'\0'};
	int i = 0, len;

	while (n != 0)
	{
		str[i] = (n % 10) + '0';
		i++;
		n = n / 10;
	}

	for (len = i - 1, i = 0; i < len; i++, len--)
	{
		if (str[i] != str[len])
			return (0);
	}

	return (1);
}
