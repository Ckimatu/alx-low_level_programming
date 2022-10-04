#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copies  string given as a parameter
 * @str: string to duplicate
 *
 * Return: a pointer to the duplicated string (success)
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len;

	i  = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[i] = str[i]) != '\0')
		i++;

	return (duplicate);
}
