#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - to check if the case type of an alphabet
 *
 * @c: an int it is a parameter input
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
