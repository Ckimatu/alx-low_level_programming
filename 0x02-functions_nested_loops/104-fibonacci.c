#include <stdio.h>

/**
 * numLength - length of string
 * @num: operand number
 * Return: digits
 */
int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}
/**
 * main - prints the first 98 fibonnaccci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, f1o = 0, tmpo = 0;
	short int i = 1, 
}
