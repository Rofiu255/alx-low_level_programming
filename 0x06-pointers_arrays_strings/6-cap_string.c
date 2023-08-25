#include "main.h"

/**
 * cap_string - a function to capitalizes every word of a string.
 * @s: string to capitalize
 *
 * Return: the resulting string is capitalise
 */
char *cap_string(char *s)
{
	int m, n;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (m = 0; s[m] != '\0'; m++)
	{
		if (m == 0 && s[m] >= 'a' && s[m] <= 'z')
			s[m] -= 32;

		for (n = 0; n < 13; n++)
		{
			if (s[m] == spe[n])
			{
				if (s[m + 1] >= 'a' && s[m + 1] <= 'z')
				{
					s[m + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
