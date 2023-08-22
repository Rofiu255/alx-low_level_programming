#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */
void puts_half(char *str)
{
	int p = 0;
	int i;

	while (str[p] != '\0')
	{
		p++;
	}

	if (p % 2 == 1)
	{
		i = (p - 1) / 2;
		i += 1;
	}
	else
	{
		i = p / 2;
	}

	for (; i < p; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
