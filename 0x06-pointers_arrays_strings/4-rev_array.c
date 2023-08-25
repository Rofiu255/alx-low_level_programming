#include "main.h"
#include <stdio.h>

/**
 * reverse_array - a function that reverse an array
 *
 * @a: an array to reverse
 * @n: the number of element in the array
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		/* Swap elements at start and end positions */
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		/* Move the pointers towards each other */
		start++;
		end--;
	}
}
