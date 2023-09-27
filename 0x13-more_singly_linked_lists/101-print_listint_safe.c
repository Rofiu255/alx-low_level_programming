#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - a function that counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped return 0.
 *         Otherwise return the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *first, *second;
	size_t nodes_count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	first = head->next;
	second = (head->next)->next;

	while (second)
	{
		if (first == second)
		{
			first = second;
			while (first != second)
			{
				nodes_count++;
				first = first->next;
				second = second->next;
			}

			first = first->next;
			while (first != second)
			{
				nodes_count++;
				first = first->next;
			}

			return (nodes_count);
		}

		first = first->next;
		second = (second->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - a function that prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: return the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes_count, i = 0;

	nodes_count = looped_listint_len(head);

	if (nodes_count == 0)
	{
		for (; head != NULL; nodes_count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodes_count; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes_count);
}
