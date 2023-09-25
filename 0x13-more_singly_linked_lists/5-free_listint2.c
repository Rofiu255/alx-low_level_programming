#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *init;

	if (head == NULL)
		return;

	while (*head)
	{
		init = (*head);
		*head = (*head)->next;
		free(init);
	}

	free(*head);
	head = NULL;
}
