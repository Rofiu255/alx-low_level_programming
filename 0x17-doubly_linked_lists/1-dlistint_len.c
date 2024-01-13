#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elem_count;

	elem_count = 0;

	if (h == NULL)
		return (elem_count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		elem_count++;
		h = h->next;
	}

	return (elem_count);
}
