#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: Always 0 (succeed)
 */
int main(void)
{
	int m;

	for (m = '0'; m <= '9' ; m++)
	{
		putchar(m);

		if (m != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
