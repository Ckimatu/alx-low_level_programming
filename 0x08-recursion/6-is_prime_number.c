#include "main.h"

int actual_prime(int n, int guess);

/**
 * is_prime_number - shows if integer is a prime number
 * @n: integer to be checked
 * Return: 1 if the input integer is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - shows if number is a prime, recursively
 * @n: number to check
 * @guess: placeholder number
 * Return: 1 if the input integer is a prime number, otherwise 0
 */

int actual_prime(int n, int guess)
{
	if (guess == 1)
	{
		return (1);
	}
	if (n % guess == 0 && guess > 0)
	{
		return (0);
	}
	return (actual_prime(n, guess - 1));
}
