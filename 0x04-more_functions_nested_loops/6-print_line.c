#include "main.h"

/**
 * print_line -  draws a straight line
 * @n: number of times the character _ should be printed
 * Return: no return
 */
void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
