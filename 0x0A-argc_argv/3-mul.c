#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the multiplication of two
 * numbers, followed by a new line.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul_result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul_result = num1 * num2;

	printf("%d\n", mul_result);

	return (0);
}
