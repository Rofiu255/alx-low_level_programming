#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - a function that reallocates a memory block using malloc and free
  *
  * @ptr: the old pointer
  * @old_size: the old size allocated
  * @new_size: the new size allocated
  *
  * Return: return Nothing from void function
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
