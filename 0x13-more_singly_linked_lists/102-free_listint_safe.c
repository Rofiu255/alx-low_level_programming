#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *lamb, *sheep;
	size_t node_count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	lamb = head->next;
	sheep = (head->next)->next;

	while (sheep)
	{
		if (lamb == sheep)
		{
			lamb = head;
			while (lamb != sheep)
			{
				node_count++;
				lamb = lamb->next;
				sheep = sheep->next;
			}

			lamb = lamb->next;
			while (lamb != sheep)
			{
				node_count++;
				lamb = lamb->next;
			}

			return (node_count);
		}

		lamb = lamb->next;
		sheep = (sheep->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t node_count, i;

	node_count = looped_listint_count(*h);

	if (node_count == 0)
	{
		for (; h != NULL && *h != NULL; node_count++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (i = 0; i < node_count; i++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (node_count);
}
