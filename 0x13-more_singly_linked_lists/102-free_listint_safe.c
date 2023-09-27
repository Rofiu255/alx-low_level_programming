#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - a function that counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped return 0.
 *         Otherwise return the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *tortoise, *hare;
	size_t node_count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				node_count++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				node_count++;
				tortoise = tortoise->next;
			}

			return (node_count);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - a function that frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: return the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *init;
	size_t node_count, i;

	node_count = looped_listint_count(*h);

	if (node_count == 0)
	{
		for (; h != NULL && *h != NULL; node_count++)
		{
			init = (*h)->next;
			free(*h);
			*h = init;
		}
	}

	else
	{
		for (i = 0; i < node_count; i++)
		{
			init = (*h)->next;
			free(*h);
			*h = init;
		}

		*h = NULL;
	}

	h = NULL;

	return (node_count);
}
