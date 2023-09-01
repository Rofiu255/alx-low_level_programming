#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that prints the multiplication of two args numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always return 0
  */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
