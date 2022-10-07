#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated with malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: a pointer to the reallocated memory block
 * If new_size == old_size - ptr
 * If new_size is == 0, and ptr != NULL - NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	char *ptr_copy, *filler;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new = malloc(new_size);

		if (new == NULL)
			return (NULL);

		return (new);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	new = malloc(sizeof(*ptr_copy) * new_size);

	if (new == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = new;

	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *ptr_copy++;

	free(ptr);
	return (new);
}
