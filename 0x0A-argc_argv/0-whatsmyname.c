#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: arguments array
 *
 * Return: Always 0 (success)
 */

int main(int argc _attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
