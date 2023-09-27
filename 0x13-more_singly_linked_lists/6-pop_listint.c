#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - a function that deletes the head node of
  * a listint_t linked list
  *
  * @head: a pointer to the linked list
  *
  * Return: returns the head data n
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int head_data = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		head_data = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (head_data);
}
