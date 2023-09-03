#include "main.h"

/**
 * factorial - a recursion function that returns the factorial
 * of a given number.
 *
 * @n: The given number to find its factorial of.
 *
 * Return: If n > 0 - it return 1 and the factorial of n.
 *         If n < 0 it return -1 to indicate an error.
 */
int factorial(int n)
{
	int factor = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	factor *= factorial(n - 1);

	return (factor);
}
