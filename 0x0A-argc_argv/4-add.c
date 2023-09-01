#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed into the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: return 1 - If there is a symbols that are non-digits in str
 *         return 0 - If all contains only numbers
 */
int main(int argc, char *argv[])
{
	int i, str, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (str = 0; argv[i][str]; str++)
		{
			if (argv[i][str] < 0 || argv[i][str] > 9)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
