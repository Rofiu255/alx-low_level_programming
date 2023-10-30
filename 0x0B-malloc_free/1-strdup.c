#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
  * _strdup - a program that duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
	int a = 0, index = 1;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (str[index])
	{
		index++;
	}

	dup = malloc((sizeof(char) * index) + 1);

	if (dup == NULL)
		return (NULL);

	while (a < index)
	{
		dup[a] = str[a];
		a++;
	}

	dup[a] = '\0';
	return (dup);
}
