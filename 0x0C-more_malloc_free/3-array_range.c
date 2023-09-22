#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - a function creates an array of integers ordered
 *               from min to max, inclusive.
 *
 * @min: The minimum value of the array.
 * @max: The maximum value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *ar, i, ar_size;

	if (min > max)
		return (NULL);

	ar_size = max - min + 1;

	ar = malloc(sizeof(int) * ar_size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < ar_size; i++)
		ar[i] = min++;

	return (ar);
}
