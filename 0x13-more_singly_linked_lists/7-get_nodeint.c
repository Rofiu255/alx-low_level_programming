#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * get_nodeint_at_index - a function that returns the nth node of
  * a listint_t linked list.
  *
  * @head: the head poninter to the linked list.
  * @index: the index of the list.
  *
  * Return: return NULL if not the node and otherwise return the head
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_count;

	for (node_count = 0; node_count < index; node_count++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
