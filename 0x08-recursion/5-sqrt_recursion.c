#include "main.h"

int _square_root(int, int);

/**
 * _sqrt_recursion - parent function
 * @n: number to calculate the square root of
 * Return: If n does not have a natural square root, -1
 */

int _sqrt_recursion(int n)
{
	return (_square_root(n, 1));
}

/**
 * _square_root - child function
 * @n: number to calculate the square root of
 * @guess: placeholder number
 * Return: If n does not have a natural square root, -1
 */

int _square_root(int n, int guess)
{
	if (n < 0)
		return (-1);
	if ((guess * guess) > n)
		return (-1);
	if (guess * guess == n)
		return (guess);

	return (_square_root(n, guess + 1));
}
