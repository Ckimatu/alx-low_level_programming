#include "main.h"
#include <stdlib.h>

/**
 * *array_range -  creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *result, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	result = malloc(sizeof(int) * size);

	if (result == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		result[i] = min++;

	return (result);
}
