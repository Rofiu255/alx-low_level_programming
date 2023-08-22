#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, b, c, str_len, p, digit;

	a = 0;
	b = 0;
	c = 0;
	str_len = 0;
	p = 0;
	digit = 0;

	while (s[str_len] != '\0')
		str_len++;

	while (a < str_len && p == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			p = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			p = 0;
		}
		a++;
	}

	if (p == 0)
		return (0);

	return (c);
}
