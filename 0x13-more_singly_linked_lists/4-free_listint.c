#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - a function that frees a linked list
  *
  * @head: The pointer to the head of the linked list
  *
  * Return: return Nothing from void function
  */
void free_listint(listint_t *head)
{
	listint_t *init;

	while (head)
	{
		init = head;
		head = head->next;
		free(init);
	}

	free(head);
}
