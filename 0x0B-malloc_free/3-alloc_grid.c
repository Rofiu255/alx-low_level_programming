#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a two-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the two-dimensional array.
 * @height: The height of the two-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the two-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **two_Dim;
	int heigth_i, width_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_Dim = malloc(sizeof(int *) * height);

	if (two_Dim == NULL)
		return (NULL);

	for (heigth_i = 0; heigth_i < height; heigth_i++)
	{
		two_Dim[heigth_i] = malloc(sizeof(int) * width);

		if (two_Dim[heigth_i] == NULL)
		{
			for (; heigth_i >= 0; heigth_i--)
				free(two_Dim[heigth_i]);

			free(two_Dim);
			return (NULL);
		}
	}

	for (heigth_i = 0; heigth_i < height; heigth_i++)
	{
		for (width_i = 0; width_i < width; width_i++)
			two_Dim[heigth_i][width_i] = 0;
	}

	return (two_Dim);
}
