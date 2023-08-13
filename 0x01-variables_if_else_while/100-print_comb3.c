#include <stdio.h>
#include <stdlib.h>

/**
 * main - Number combination seeing 01 and 10 as the same
 *
 * Return: Always 0 (depicts Success)
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = 1; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');
			if ((num1 % 10) == 8 && (num2 % 10) == 9)
			{
				continue;
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
