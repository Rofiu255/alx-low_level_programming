#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Printing of alphabets using putchar only.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
