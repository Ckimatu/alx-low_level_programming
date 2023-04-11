#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 * Return:  index where value is located
 * if value is not present or array is NULL, your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	while (low <= high)
	{
		size_t i, mid;

		printf("Searching in array:");
		for (i = low; i < high; i++)
			printf(" %d,", array[i]);
		printf(" %d\n", array[high]);

		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
