#include "main.h"
#include <stdio.h>

/**
 * *_strcat - a function that concatenates two strings.
 * appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 *
 * @dest: the string to contain the concatnated strings
 * @src: the string to append
 *
 * Return: return the dest strings
 */
char *_strcat(char *dest, char *src)
{
	int m, n;

	m = 0;
	n = 0;

	while (dest[m] != '\0')
	{
		m++;
	}

	for (; src[n] != '\0';)
	{
		dest[m] = src[n];
		n++;
		m++;
	}
	dest[m] = '\0';

	return (dest);
}
