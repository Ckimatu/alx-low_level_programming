#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list prints;
	unsigned int i;
	char *str;

	va_start(prints, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(prints, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(prints);
}