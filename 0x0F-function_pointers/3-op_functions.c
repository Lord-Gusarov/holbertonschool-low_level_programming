#include "3-calc.h"
/**
 * op_add - calculates the sum of a and b
 * @a: an integer number
 * @b: an integer number
 *
 * Return: the sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - calculates the difference of a and b
 * @a: an integer number
 * @b: an integer number
 *
 * Return: the difference of @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - calculates the product of a and b
 * @a: an integer number
 * @b: an integer number
 *
 * Return: the product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calculates the result of the division of a by b
 * @a: the dividend, an integer number
 * @b: the divisor, an integer number
 *
 * Return: the quotient of @a and @b, the integer part
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - calculates the remainder of the division of a by b
 * @a: an integer number
 * @b: the divisor or mod, an integer number
 *
 * Return: the remainder of the division of @a and @b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
