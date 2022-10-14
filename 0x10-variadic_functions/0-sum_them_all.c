#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum of parameters
 * If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	unsigned int sum = 0;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
