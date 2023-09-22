#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
  * free_list - a function that frees a linked list.
  * @head: The pointer to the first node of linked list
  *
  * Return: returns Nothing
  */

void free_list(list_t *head)
{
	list_t *dup;

	while (head)
	{
		dup = head;
		head = head->next;
		free(dup->str);
		free(dup);
	}

	free(head);
}
