#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _print_rev_recursion - a function that print a string in reverse
  * @s: the string to be reversed
  *
  * Return: void return Nothing.
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
