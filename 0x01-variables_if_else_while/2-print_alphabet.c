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
	char alpha[26] = "abcdefghijklmnopqrstuvxwy";
	int i;

	for (i = 0, i < 26, i++)
	{
		putchar(alpha[i]);
	}
	putchar("\n");
	return (0);
}
