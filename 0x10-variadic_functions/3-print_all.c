#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints a char
 * @arg: list of arguments pointing to the character to be printed
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - prints an int
 * @arg: list of arguments pointing to the integer to be printed
 */
void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);
	printf("%d", number);
}

/**
 * print_float - prints a float
 * @arg: list of arguments pointing to the float to be printed
 */
void print_float(va_list arg)
{
	float number;

	number = va_arg(arg, double);
	printf("%f", number);
}

/**
 * print_string - prints a string
 * @arg: list of arguments pointing to the sring to be printed
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all -  prints anything.
 * @format:  list of types of arguments passed to the function
 * Description: any argument not of trpe char, int,
 * float or char * is ignored
 * if the string is NULL, print (nil) instead
 */

void print_all(const char * const format, ...)
{
	va_list all;
	int i = 0, j = 0;
	char *separator = "";
	printer_t functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(all, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(functions[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			functions[j].print(all);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(all);
}
