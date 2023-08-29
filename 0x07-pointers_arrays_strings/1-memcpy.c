#include "main.h"

/**
  * _memcpy - a function to copy memory area @src to memory area @dest
  * @dest: the dest memory area to copy into
  * @src: the source memory area to copy
  * @n: the bytes from memory area to copy
  *
  * Return: return the memory area copied into @dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
