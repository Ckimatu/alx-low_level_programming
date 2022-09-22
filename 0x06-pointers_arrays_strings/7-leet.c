#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer referencing the string
 * Return: s after transformation
 */

char *leet(char *s)
{
	int count, inner_count;
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (count = 0; s[count] != '\0'; count++)
	{
		for (inner_count = 0; inner_count < 5; inner_count++)
		{
			if (s[count] == s1[inner_count] || s[count] == S1[inner_count])
			{
				s[count] = s2[inner_count];
				break;
			}
		}
	}
	return (s);
}
