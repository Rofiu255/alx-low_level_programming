#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *argstostr - a function that concatenates all the arguments of my program.
 * @ac: the number of arguments used in a program
 * @av: the argumentss array
 *
 * Return: return NULL for no arguments
 * return a pointer to a new string or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i;
	int total_length;
	int current_position;
	char *result;

	total_length = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/*Calculate the total length of the concatenated string*/
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;

		/*+1 for the newline character*/
	}

	/* Allocate memory for the concatenated string */
	result = (char *)malloc(total_length + 1);
	/* +1 for the null terminator */
	if (result == NULL)
	{
		return (NULL);
		/* Memory allocation failed */
	}
	/* Concatenate the arguments with newline characters */
	current_position = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(result + current_position, av[i]);
		current_position += strlen(av[i]);
		result[current_position] = '\n';
		current_position++;
	}
	result[total_length] = '\0';
	/* Null-terminate the string */
	return (result);
}

/**
 * arg_concat - a function that concatenate the arguments
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: return 0
 */
int arg_concat(int argc, char **argv)
{
	char *concatenated_args = argstostr(argc, argv);

	if (concatenated_args != NULL)
	{
		printf("Concatenated Arguments:\n%s\n", concatenated_args);
		free(concatenated_args);

		/*Don't forget to free the allocated memory*/
	}
	else
	{
		printf("Arguments are empty or memory allocation failed.\n");
	}
	return (0);
}
