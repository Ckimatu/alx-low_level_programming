#include "main.h"
#include <stdlib.h>

/**
 * *argstostr -  concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: a pointer to the new string
 * NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, length;
	char *new;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}

	new = malloc(sizeof(char) * (length + 1));

	if (new == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new[k] = av[i][j];
			k++;
		}
		new[k] = '\n';
		k++;
	}
	return (new);
}
