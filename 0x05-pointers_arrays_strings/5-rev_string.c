#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the used string reference pointer
 * Return: Always 0.
 */

void rev_string(char *s)
{
	char imv;
	int j, tes, tes1;

	tes = 0;
	tes1 = 0;

	while (s[tes] != '\0')
	{
		tes++
	}

	tes1 = tes - 1;

	for (j = 0; j < tes / 2; j++)
	{
		imv = s[j];
		s[j] = s[tes1];
		s[tes1--] = imv;
	}
}
