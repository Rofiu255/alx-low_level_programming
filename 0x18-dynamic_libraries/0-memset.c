#include "main.h"

/**
  * _memset - Fill memory with a constant byte
  * @s: the memory area to fill
  * @b: the constant byte to fill into @s memory
  * @n: the bytes of memory area to fill into @s memory
  *
  * Return: return the memory area @s filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
