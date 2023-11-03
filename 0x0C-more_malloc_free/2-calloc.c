#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - A program that allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_alloc;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_alloc = malloc(size * nmemb);

	if (mem_alloc == NULL)
		return (NULL);

	filler = mem_alloc;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (mem_alloc);
}
