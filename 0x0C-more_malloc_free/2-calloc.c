#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _calloc - a function that  allocates memory for an array, using malloc
  *
  * @nmemb: number of members
  * @size: size
  *
  * Return: return Nothing
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
