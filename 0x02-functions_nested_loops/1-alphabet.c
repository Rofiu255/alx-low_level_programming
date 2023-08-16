#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * print_alphabet - printing of alphabet in lowercase letters.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
