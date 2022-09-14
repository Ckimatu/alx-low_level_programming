#include "main.h"

/**
 * _islower - Entry point
 * Description: checks if character is lowercase
 * @c: the integer value it receives
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
return (0);
}
