#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, ti = 0, nr = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			nr *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		ti = ti + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (ti * nr);
}
