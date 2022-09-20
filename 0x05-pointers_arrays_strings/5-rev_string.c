#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int count = 0, k, p;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (k = 0; k < (count - 1); k++)
	{
		for (p = k + 1; p > 0; p--)
		{
			temp = *(str + p);
			*(str + p) = *(str + (p - 1));
			*(str + (p - 1)) = temp;
		}
	}
}
