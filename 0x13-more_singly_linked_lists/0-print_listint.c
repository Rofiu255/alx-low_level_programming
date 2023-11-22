#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  * print_listint - a program that prints all the elements of a linked list
  * @h: The head of the linked list
  *
  * Return: The number of nodes of the linked list
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
