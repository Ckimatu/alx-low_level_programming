#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0.
 */

int main(void)
{
	int r = 0, k = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (k < 2772)
	{
		r = rand() % 128;
		if (( k + r) > 2772)
			break;
		k = k + r;
		printf("%k", r);
	}
	printf("%k\n", (2772 - k));
	return (0);
}
