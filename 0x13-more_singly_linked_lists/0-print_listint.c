#include <stdio.h>
#include "lists.h"

/**
  * print_listint - a function that prints all the elements of a linked list
  *
  * @h: The head pointer of the linked list
  *
  * Return: The number of nodes of the linked list will be returned
  */
size_t print_listint(const listint_t *h)
{
	int node_count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			node_count++;
		}
	}

	return (node_count);
}
