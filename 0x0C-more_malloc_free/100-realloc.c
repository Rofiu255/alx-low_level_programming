#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - A program that reallocates a memory block using malloc and free.
 *
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size returns- ptr.
 *         If new_size == 0 and ptr is not NULL returns - NULL.
 *         Otherwise returns - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (index = 0; index < old_size && index < new_size; index++)
	{
		new_ptr[index] = ((char *) ptr)[index];
	}

	free(ptr);
	return (new_ptr);
}
