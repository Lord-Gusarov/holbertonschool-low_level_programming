#include "holberton.h"

/**
 * is_palindrome - determines if a string is a palindrome
 * @s: string to analyze
 *
 * Return: 1 if the string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (is_palindrome_helper(s, 0, len(s) - 1));
}

/**
 * len - deermines length of a string
 * @s: string to examine
 *
 * Return: length of a string
 */
int len(char *s)
{
	if (!(*s))
		return (0);
	return (1 + len(s + 1));
}

/**
 *is_palindrome_helper - recursively helps determine if
 * a string is a palindrome
 * @s: string being examined
 * @f_index: index in the front of the string being compared
 * @b_index: index in the back of the string being compared
 * Return: 1 if the string is a palindrome and 0 if not
 */
int is_palindrome_helper(char *s, int f_index, int b_index)
{
	if (f_index >= b_index)
		return (1);
	if (s[f_index] != s[b_index])
		return (0);
	return (is_palindrome_helper(s, ++f_index, --b_index));
}
