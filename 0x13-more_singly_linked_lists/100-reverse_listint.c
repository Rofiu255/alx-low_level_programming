#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - a fucntion that reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: return the pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node = NULL;

	if (head)
	{
		while (*head)
		{
			next_node = *head;
			*head = (*head)->next;
			next_node->next = prev_node;
			prev_node = next_node;
		}

		*head = prev_node;
		return (*head);
	}

	return (NULL);
}
