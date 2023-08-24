#include "main.h"
#include <stdio.h>
/**
 * *_strncpy -  a function that copies a string.
 *
 * @dest: destination of the strings
 * @src: contains a string to copy
 * @n: the number of bytes to copy
 *
 * Return: return the dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	/* to define n byte to copy from length i of string */
	/* src and copy it into dest string */
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
