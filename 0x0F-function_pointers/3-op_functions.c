#include "3-calc.h"

/**
 * op_add - calculates the sum of 2 integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - claculates the product of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculated the division of 2 integers
 * @a: integer to be divided
 * @b: number to divide with
 * Return: result of division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of a division
 * @a: the number to be divided
 * b: the number to divide a with
 * Return: the remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
