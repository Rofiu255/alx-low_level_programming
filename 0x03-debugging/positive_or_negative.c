#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - compute if a number is positive, zero or negative.
 *
 * @n: an integer
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return;
}
