#include <stdio.h>
/**
 * main - Entry point
 * Description: prints combination of 3 numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int b, e, k;

	for (b = '0'; b <= '9'; b++)
	{
		for (e = '0'; e <= '9'; e++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (b < e && e < k)
				{
					putchar(b);
					putchar(e);
					putchar(k);
					if (b != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
return (0);
}
