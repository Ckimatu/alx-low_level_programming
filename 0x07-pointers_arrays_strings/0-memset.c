#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: char pointer
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}

