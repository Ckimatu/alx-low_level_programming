#include "main.h"

int check_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - checks length of string
 * @s: string to be checked
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of string
 * Return: 1 if palindrome, 0 if not
 */

int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}
