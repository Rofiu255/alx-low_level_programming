#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	int (*addr)(int, char **) = main;/*addr - is address*/
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)addr;
		printf("%.2x", opcode);

		if (i == bytes - 1)
			continue;
		printf(" ");

		addr++;
	}

	printf("\n");

	return (0);
}
