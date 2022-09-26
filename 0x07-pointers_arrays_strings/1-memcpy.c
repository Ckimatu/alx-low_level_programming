#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: dest pointer
 * @src: source pointer
 * @n:size of bytes to copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
