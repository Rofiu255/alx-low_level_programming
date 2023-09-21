#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - a function that count the number of elements of a list
  * @h: A linked list to count its elements
  *
  * Return: The number of elements of a list is returned
  */
size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	while (h)
	{
		element_count++;
		h = h->next;
	}

	return (element_count);
}
