#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop return NULL.
 *         Otherwise return the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *second;

	if (head == NULL || head->next == NULL)
		return (NULL);

	first = head->next;
	second = (head->next)->next;

	while (second)
	{
		if (first == second)
		{
			first = head;

			while (first != second)
			{
				first = first->next;
				second = second->next;
			}

			return (first);
		}

		first = first->next;
		second = (second->next)->next;
	}

	return (NULL);
}
