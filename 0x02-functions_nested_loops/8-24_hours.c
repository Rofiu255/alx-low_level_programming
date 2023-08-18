#include "main.h"
#include <stdio.h>

/**
  * jack_bauer - Prints every minute of the day of Jack Bauer
  *
  * Return: ...
  */
void jack_bauer(void)
{
	int num1, num2, num3, num4;

	for (num1 = 0; num1 <= 2; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			if ((num1 <= 1 && num2 <= 9) || (num1 <= 2 && num2 <= 3))
			{
				for (num3 = 0; num3 <= 5; num3++)
				{
					for (num4 = 0; num4 <= 9; num4++)
					{
						_putchar(num1 + '0');
						_putchar(num2 + '0');
						_putchar(58);
						_putchar(num3 + '0');
						_putchar(num4 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
