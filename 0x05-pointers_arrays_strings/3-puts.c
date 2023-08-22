#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string followed by a new line to stdout
 *
 * @str: a string pointer to print
 */
void _puts(char *str)
{
	int p;

	p = 0;

	while(str[p] != '\0')
	{
		putchar(str[p]);
		p++;
	}
	putchar('\n');
}
