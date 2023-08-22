#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string.
 *
 * @s: a given string
 */

#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string.
 *
 * @s: a given string
 */
void rev_string(char *s)
{
	int p, str_len;

	p = 0;

	while (s[p] != '\0')
	{
		p++;
	}

	str_len = p;

	for (str_len -= 1; str_len >= 0; str_len--)
	{
		*s = s[str_len];
	}
}
