#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints its name, followed by a new line.
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: return the name of the file name
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s \n", argv[0]);
	return (0);
}
