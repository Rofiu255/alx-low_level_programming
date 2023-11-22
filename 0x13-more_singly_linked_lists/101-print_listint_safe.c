#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *lamb, *sheep;
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
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count, index = 0;

	node_count = looped_listint_len(head);

	if (node_count == 0)
	{
		for (; head != NULL; node_count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < node_count; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node_count);
}
