#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Printing of alphabets except q and e using putchar only.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
