#include "main.h"
#include <stdio.h>

/**
 * puts2 -  a function that prints every other character of a string, starting
 * with the first character, followed by a new line
 *
 * @str: a given string
 */
void puts2(char *str)
{
	int p, len;

	len = 0;

	for (; str[len] != '\0';)
		len++;

	p = len;

	for (p = 0; p < len; p += 2)
		putchar(str[len]);
	putchar('\n');
}
