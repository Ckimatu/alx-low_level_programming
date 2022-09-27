#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return:  pointer to the byte in s that matches one of the bytes in accept
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int count;

	while (*s)
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
