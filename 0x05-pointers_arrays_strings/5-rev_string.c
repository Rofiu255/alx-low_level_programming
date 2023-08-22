#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string.
 *
 * @s: a given string
 */
void rev_string(char *s)
{
	char rev;
	int p, str_len, str_len1;

	str_len = 0;
	str_len1 = 0;

	while (s[str_len] != 0)
	{
		str_len++;
	}

	str_len1 = str_len - 1;

	for (p = 0; p < str_len / 2; p++)
	{
		rev = s[p];
		s[p] = s[str_len1];
		s[str_len--] = rev;
	}
}
