#include "main.h"

/**
 * _isalpha - function to check if c is a lowercase or uppercase letter
 * @c: the int used for argument of the funtion
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
