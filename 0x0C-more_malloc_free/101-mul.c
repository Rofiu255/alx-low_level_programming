#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_strlen(char *str);
char *create_x_array(int size);
char *iterate_zeroes(char *str);
void Prod_result(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *str)
{
	int strlen = 0;

	while (*str++)
		strlen++;

	return (strlen);
}

/**
 * create_x_array - Creates an array of chars and initializes it with
 *                 the character 'x'. Adds a terminating null byte.
 * @size: The size of the array to be initialized.
 *
 * Description: If there is insufficient space, the
 *              function exits with a status of 98.
 * Return: A pointer to the array.
 */
char *create_x_array(int size)
{
	char *ar;
	int i;

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
		ar[i] = 'x';

	ar[i] = '\0';

	return (ar);
}

/**
 * iterate_zeroes - Iterates through a string of numbers containing
 *                  leading zeroes until it hits a non-zero number.
 * @str: The string of numbers to be iterate through.
 *
 * Return: A pointer to the next non-zero element.
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 *
 * Description: If c is a non-digit, the function
 *              exits with a status of 98.
 * Return: The converted int.
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
 * prod_result - Multiplies a string of numbers by a single digit.
 * @prod: The buffer to store the result.
 * @mult: The string of numbers.
 * @digit: The single digit.
 * @zeroes: The necessary number of leading zeroes.
 *
 * Description: If mult contains a non-digit, the function
 *              exits with a status value of 98.
 */
void prod_result(char *prod, char *mult, int digit, int zeroes)
{
	int prod_len, n, tens = 0;

	prod_len = find_strlen(mult) - 1;
	mult += prod_len;

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

	for (; prod_len >= 0; prod_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		n = (*mult - '0') * digit;
		n += tens;
		*prod = (n % 10) + '0';
		tens = n / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_nums - Adds the numbers stored in two strings.
 * @final_prod: The buffer storing the running final product.
 * @next_prod: The next product to be added.
 * @next_len: The length of next_prod.
 */
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int n, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		n = (*final_prod - '0') + (*next_prod - '0');
		n += tens;
		*final_prod = (n % 10) + '0';
		tens = n / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		n = (*next_prod - '0');
		n += tens;
		*final_prod = (n % 10) + '0';
		tens = n / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 *
 * Description: If the number of arguments is incorrect or one number
 *              contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
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

	size = find_strlen(argv[1]) + find_strlen(argv[2]);
	final_prod = create_x_array(size + 1);
	next_prod = create_x_array(size + 1);

	for (i = find_strlen(argv[2]) - 1; i >= 0; i--)
	{
		digit = get_digit(*(argv[2] + i));
		prod_result(next_prod, argv[1], digit, zeroes++);
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
