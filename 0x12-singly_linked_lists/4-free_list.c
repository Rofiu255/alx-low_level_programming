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
	list_t *temp_list;

	while (head)
	{
		temp_list = head;
		head = head->next;
		free(temp_list->str);
		free(temp_list);
	}

	free(head);
}
