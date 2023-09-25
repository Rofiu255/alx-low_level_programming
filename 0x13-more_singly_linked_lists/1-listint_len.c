#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  * listint_len - a function that counts the elements in a linked list
  *
  * @h: The head pointer of the linked list
  *
  * Return: return the number of elements in a linked list
  */
size_t listint_len(const listint_t *h)
{
	int node_count = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			node_count++;
		}
	}

	return (node_count);
}
