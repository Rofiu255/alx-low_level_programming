#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - a function calculates the sum of all the
 *               data (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the list is empty return 0.
 *         Otherwise return the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int total_sum = 0;

	while (head)
	{
		total_sum += head->n;
		head = head->next;
	}

	return (total_sum);
}
