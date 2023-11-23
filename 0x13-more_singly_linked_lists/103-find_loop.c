#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lamb, *sheep;

	if (head == NULL || head->next == NULL)
		return (NULL);

	lamb = head->next;
	sheep = (head->next)->next;

	while (sheep)
	{
		if (lamb == sheep)
		{
			lamb = head;

			while (lamb != sheep)
			{
				lamb = lamb->next;
				sheep = sheep->next;
			}

			return (lamb);
		}

		lamb = lamb->next;
		sheep = (sheep->next)->next;
	}

	return (NULL);
}
