#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - A program that allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mem_alloc = malloc(b);

	if (mem_alloc == NULL)
		exit(98);

	return (mem_alloc);
}
