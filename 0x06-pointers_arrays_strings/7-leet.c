#include "main.h"

/**
 * *leet - a function that encodes a string in 1337
 * @s: the string to be encoded in 1337
 *
 * Return: the encoded string;
 */
char *leet(char *s)
{
	int i, j;

	char *m = "aeotlAEOTL";
	char *n = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == m[j])
			{
				s[i] = n[j];
			}
		}
	}

	return (s);
}
