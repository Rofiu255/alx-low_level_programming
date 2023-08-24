#include "main.h"
#include <stdio.h>

/**
 * _strcmp - a function that compare two string
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: return the differece between the two string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	/* Strings are equal up to the point where one or both strings end */
	return (*s1 - *s2);
}
