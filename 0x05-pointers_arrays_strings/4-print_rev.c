#include "main.h"
#include <stdio.h>
/**
 * print_rev - a function that prints a string in reverse
 * followed by a new line.
 *
 * @s: given string
 */
void print_rev(char *s)
{
	int p;
	int str_len;

	p = 0;

	while (s[p] != '\0')
	{
		p++;
	}

	str_len = p;

	for (str_len -= 1; str_len >= 0; str_len--)
	{
		putchar(s[str_len]);
	}
	putchar('\n');
}
