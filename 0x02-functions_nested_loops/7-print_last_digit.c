#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Function that prints the last digit of a number.
 *
 * @c: an integer input
 *
 * Return: Always 0 (shows success)
 */
int print_last_digit(int c)
{
	int last_dig;

	last_dig = c % 10;

	if (c < 0)
	{
		last_dig = last_dig * -1;
	}
	_putchar(last_dig + '0');
	return (last_dig);
}
