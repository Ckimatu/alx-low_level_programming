#include "main.h"

int check(char *s1, char *s2);
char *move(char *s2);

/**
 * wildcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 1 if the strings are identical, else 0
 */

int wildcmp(char *s1, char *s2)
{
	int sum = 0;

	if (*s1 == '\0' && *s2 == '*' && !*move(s2))
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s1 == '\0' || *s2 == '\0')
	{
		return (0);
	}
	if (*s2 == '*' )
	{
		s2 = move(s2);
		if (*s2 == '\0')
			return (1);
		if (*s1 == *s2)
			sum += wildcmp(s1 + 1, s2);
		return (!!sum);
	}
	return (0);
}

/**
 * check - checks recursively all paths when
 * characters are equal
 * @s1: first string
 * @s2: second string
 * Return: value of wildcmp() or itself
 */

int check(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1, s2));
	return (check(s1 + 1, s2));
}

/**
 * move - moves current char past *
 * @s2: string to iterate over
 *
 * Return: address of the character after *
 */

char *move(char *s2)
{
	if (*s2 == '*' )
		return (move(s2 + 1));
	else
		return (s2);
}
