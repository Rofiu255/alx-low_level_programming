#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted.
 *
 * Return: return success - 1.
 *         return failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node_count = 1;
	listint_t *new_node = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new_node->next;
		free(new_node);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (node_count == index)
		{
			new_node = temp->next;
			temp->next = new_node->next;
			free(new_node);
			return (1);
		}

		temp = temp->next;
		node_count++;
	}

	return (-1);
}
