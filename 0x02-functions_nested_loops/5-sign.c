#include "main.h"
#include <stdio.h>
/**
 * print_sign - Printing the sign of a number either positive or negative.
 *
 * @n: it is an integer with either positive or negative or zero.
 *
 * Return: +1 for positive num, -1 for negative num, 0 for zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return ('1');
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (-1);
	}
}
