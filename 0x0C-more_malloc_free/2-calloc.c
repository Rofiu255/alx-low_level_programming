#include "holberton.h"
#include <stdlib.h>

/**
  * _calloc - ...
  * @nmemb: number of members
  * @size: size
  *
  * Return: ...
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int index = 0, total_size = 0;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	mem = malloc(total_size);

	if (mem == NULL)
		return (NULL);

	while (index < total_size)
	{
		mem[index] = 0;
		index++;
	}

	return (mem);
}
