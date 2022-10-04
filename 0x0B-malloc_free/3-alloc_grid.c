#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: a pointer to the created grid
 * NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **result;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	result = (int **) malloc(sizeof(int *) * height);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		result[i]  = (int *) malloc(sizeof(int) * width);
		if (result[i] == NULL)
		{
			free(result);
			for (j = 0; j <= i; j++)
				free(result[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			result[i][j] = 0;
		}
	}
	return (result);
}
