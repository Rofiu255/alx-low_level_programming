#include "main.h"
#include <stdio.h>
/**
 **_strncat - a function that concatenates two strings.
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: desination of the concatenated srings
 * @src: string to append to dest
 * @n: number of bytes to concatenate
 * Return: return pointer to resulting dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, m = 0;

	/* Find the length m of the destination string */
	while (dest[m] != '\0')
	{
		m++;
	}

	/* Copy at most n characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[m + i] = src[i];
	}

	/* Add null-terminator to the concatenated string */
	dest[m + n] = '\0';
	return (dest);
}
