#include "main.h"
#include <stdlib.h>

/**
  * create_array - a function that creates an array of chars
  * @size: The size of the array str
  * @c: The char to fill in the array str
  *
  * Return: The array filled
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
