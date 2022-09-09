#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char b;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
return (0);
}
