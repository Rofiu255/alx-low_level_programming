#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints its name, followed by a new line.
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: return the name of the file name
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
