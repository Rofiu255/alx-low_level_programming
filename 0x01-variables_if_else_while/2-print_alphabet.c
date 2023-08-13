#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Printing of alphabets using putchar only.
 *
 * Return: Always 0 (Success)
 */
char main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
