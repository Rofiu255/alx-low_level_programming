#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int cents_value, coins_num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents_value = atoi(argv[1]);

	while (cents_value > 0)
	{
		coins_num++;
		if ((cents_value - 25) >= 0)
		{
			cents_value -= 25;
			continue;
		}
		if ((cents_value - 10) >= 0)
		{
			cents_value -= 10;
			continue;
		}
		if ((cents_value - 5) >= 0)
		{
			cents_value -= 5;
			continue;
		}
		if ((cents_value - 2) >= 0)
		{
			cents_value -= 2;
			continue;
		}
		cents_value--;
	}

	printf("%d\n", coins_num);

	return (0);
}
