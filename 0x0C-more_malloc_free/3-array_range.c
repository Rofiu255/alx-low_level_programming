#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - A program that creates an array of integers.
  * @min: The first value of the array.
  * @max: The last value of the array.
  *
  * Return: integer value
  */
int *array_range(int min, int max)
{
	int *array, index = 0;

	if (min > max)
		return (NULL);

	array = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (array == NULL)
		return (NULL);

	while (min <= max)
	{
		array[index] = min;
		index++;
		min++;
	}

	return (array);
}
