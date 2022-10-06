#include "main.h"
#include <stdlib.h>

/**
 * *_memset - copies character
 * @s: pointer to the block of memory to fill
 * @b: value to be set
 * @n: number of bytes to be set to the value
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc -  allocates memory for an array of nmemb elements
 * of size bytes each
 * @nmemb: number of elements to be allocated
 * @size: size of elements
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = malloc(size * nmemb);

	if (result == NULL)
		return (NULL);

	_memset(result, 0, nmemb * size);

	return (result);
}
