#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - A program that executes a function given as a
 *                  parameter on each element of an array.
 * @array: The array.
 * @size: The size of array.
 * @action: A pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (index < size)
		{
			action(array[index]);
			index++;
		}
	}
}
