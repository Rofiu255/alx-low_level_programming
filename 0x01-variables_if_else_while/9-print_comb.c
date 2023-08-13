#include <stdlib.h>
#include <stdio.h>

/**
 * main - printing all single digits from 0 to 10
 *
 * Return: Always 0 (depict Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
