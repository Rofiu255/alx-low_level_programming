#include <stdlib.h>
#include <stdio.h>

/**
  * main - a program that prints all the args content
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always return 0
  */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
