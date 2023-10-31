#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that prints all the args content
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}
