#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src including the
 * terminating null byte (\0) to the buffer pointed to by dest
 *
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: return the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int str_len, p;

	str_len = 0;

	while (src[str_len] != '\0')
	{
		str_len++;
	}

	for (p = 0; p < str_len; p++)
	{
		dest[p] = src[p];
	}
	dest[p] = '\0';

	return (dest);
}
