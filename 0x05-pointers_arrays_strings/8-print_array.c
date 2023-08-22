#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integer
 * followed by a new line.
 *
 * @a: an array of numbers
 * @n: the number of array elements
 */
void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		printf("%d", a[p]);

		if (p != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
