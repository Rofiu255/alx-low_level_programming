#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *head_node;
	int ret;

	if (*head == NULL)
		return (0);

	head_node = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(head_node);

	return (ret);
}
