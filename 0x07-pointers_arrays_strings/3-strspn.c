#include "main.h"

/**
 * _strspn - a function to gets the length of a prefix substring.
 * @s: The string to be searched its length
 * @accept: The prefix to be measured in length.
 *
 * Return: The number of bytes in s which
 *         consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				a++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (a);
		}

		s++;
	}

	return (a);
}
