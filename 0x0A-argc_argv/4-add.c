#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the addition of positive numbers,
 *        followed by a new line.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int num_i, digit, sum = 0;

	for (num_i = 1; num_i < argc; num_i++)
	{
		for (digit = 0; argv[num_i][digit]; digit++)
		{
			if (argv[num_i][digit] < '0' || argv[num_i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num_i]);
	}

	printf("%d\n", sum);

	return (0);
}
