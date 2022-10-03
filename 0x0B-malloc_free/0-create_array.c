#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of array to create
 * @c: char to initialize array c
 *
 * Return: a pointer to the array
 * NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int i = 0;

	if (size == 0)
		return (0);

	d = (char *) malloc(sizeof(char) * size);

	if (d == NULL)
		return (0);

	while (i < size)
	{
		*(d + i) = c;
		i++;
	}

	*(d + i) = '\0';

	return (d);
}
