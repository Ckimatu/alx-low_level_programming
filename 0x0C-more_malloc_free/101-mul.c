#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *s);
char *create_array(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - finds lenght of a sting
 * @str: string measurred
 *
 * Return: length of string
 */
int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
/**
 * create_array - creates an array of chars
 * and initializes it with character 'x'
 * Adds a terminating null byte
 * @size: size of array to be initialized
 * Description: in case of insufficient space, exit with status of 98
 * Return: a pointer to the array
 */
char *create_array(int size)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
		array[i] = 'x';

	array[i] = '\0';

	return (array);
}
/**
 * iterate_zeroes - iterates through a sring of numbers containging lead zeroes
 * until it gets to a non-zero number
 * @str: the string
 *
 * Return: pointer to the next non-zero element
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}
/**
 * get_digit - converts a digit character to an int
 * @c: character to be converted
 *
 * Description: if c is not a digit, exit with 98
 * Return: the converted int
 */
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}
/**
 * get_prod - multiplies a string of numbers by a single digit
 * @prod: buffer to store the result
 * @mult: string of numbers
 * @digit: single digit
 * @zeroes: the necessary number of leading zeroes
 *
 * Description: if mult contains a non-digit
 * exit funcion with a status value of 98
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}
/**
 * add_nums - adds numbers stored in 2 strings
 * @final_prod: buffer storing the final product
 * @next_prod: next product to be added
 * @next_len: length of next_prod
 */
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - multiplies 2 positive numbers
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Description: if number of arguments is incorrect or one number contains
 * non digits, exit function with a status of 98
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, i, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_array(size + 1);
	next_prod = create_array(size + 1);

	for (i = find_len(argv[2]) - 1; i >= 0; i--)
	{
		digit = get_digit(*(argv[2] + i));
		get_prod(next_prod, argv[1], digit, zeroes++);
		add_nums(final_prod, next_prod, size - 1);
	}
	for (i = 0; final_prod[i]; i++)
	{
		if (final_prod[i] != 'x')
			putchar(final_prod[i]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
