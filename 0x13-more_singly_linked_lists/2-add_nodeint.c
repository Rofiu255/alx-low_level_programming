#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint - a function that adds a new node at the beginning
  * of a linked list
  *
  * @head: The head pointer of the linked list
  * @n: The value to add to the new node
  *
  * Return: return the address of the new element, or NULL it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	return (NULL);
}