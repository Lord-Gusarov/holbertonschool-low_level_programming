#include "holberton.h"
/**
 *_islower - determines if a charcater is lowercase
 *@c : character to be tested
 *Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
