#include "main.h"

/**
 * _strpbrk - a function that gets the length of a prefix substring.
 *
 * @s: The string to be searched for its prefix
 * @accept: The prefix to be measured in length
 *
 * Return: The number of bytes in s which
 *         consist only of bytes from accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
