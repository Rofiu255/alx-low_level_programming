#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - a function that allocates memory
  * @b: the size to allocate to c
  *
  * Return: return Nothing from void function
  */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);

	return (c);
}
