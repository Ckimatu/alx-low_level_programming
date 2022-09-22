#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c;
	int d;

	for (c = 0; c < n--; c++)
	{
		d = a[c];
		a[c] = a[n];
		a[n] = d;
	}
}
