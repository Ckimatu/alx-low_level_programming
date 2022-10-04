#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings
 * @s1: string to be modified
 * @s2: appended to s1
 *
 * Return: pointer to resulting string
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int length1 = 0, length2 = 0, final_length = 0, k = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[length1])
		length1++;

	while (s2[length2])
		length2++;

	final_length = length1 + length2;

	result = malloc(sizeof(char) * (final_length + 1));

	if (result == NULL)
		return (NULL);

	length2 = 0;

	while (k < final_length)
	{
		if (k < length1)
			result[k] = s1[k];

		if (k >= length1)
		{
			result[k] = s2[length2];
			length2++;
		}
		k++;
	}
	result[k] = '\0';

	return (result);
}
