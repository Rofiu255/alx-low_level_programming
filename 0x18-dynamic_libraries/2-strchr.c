#include "main.h"

/**
 * *_strchr - a function Locates a character in a string.
 * @s: The string to be searched through.
 * @c: The character to be located in @s string.
 *
 * Return: If c is found - a pointer to the first occurence.
 *         If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			s += i;

			return (s);
		}
	}

	return ('\0');
}
