#include <stdlib.h>
#include <stdio.h>

/**
  * main - a program that Prints the number of args pass into it
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always return 0
  */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
