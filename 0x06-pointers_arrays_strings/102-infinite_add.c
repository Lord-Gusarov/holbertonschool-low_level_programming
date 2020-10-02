#include "holberton.h"
#include <stdio.h>
/**
 *infinite_add - adds two numbers passed as strings
 *@n1: a number as a string to add
 *@n2: a number as a string to add
 *@r: pointer to where the result should be saved
 *@size_r: size of r
 *Return: 0 if they can't be added, otherwise the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int s1, s2, sr = 0, sum = 0, z = '0', zz = 2 * '0';
	char ch;

	for (s1 = 0; n1[s1] != '\0'; s1++)
		;
	for (s2 = 0; n2[s2] != '\0'; s2++)
		;
	size_r--;
	if (s1 >= size_r || s2 >= size_r)
		return (0);
	for (s1--, s2--; (s1 >= 0 || s2 >= 0) && sr < size_r; s1--, s2--, sr++)
	{
		if (s1 >= 0 && s2 >= 0)
			sum += n1[s1] + n2[s2] - zz;
		else if (s1 < 0)
			sum += n2[s2] - z;
		else
			sum += n1[s1] - z;
		r[sr] = (sum % 10) + z;
		sum /= 10;
	}
	if (sum > 0 && sr == size_r)
		return (0);
	if (sum)
		r[sr++] = sum + z;
	r[sr] = '\0';

	for (s1 = 0, s2 = sr - 1; s1 < s2; s1++, s2--)
	{
		ch = r[s1];
		r[s1] = r[s2];
		r[s2] = ch;
	}
	return (r);
}
