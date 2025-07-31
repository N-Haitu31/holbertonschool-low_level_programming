#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * * free_dlistint - frees a linked list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *pointer;
	dlistint_t *next_node;

	pointer = head;

	while (pointer != NULL)
	{
		next_node = pointer->next;
		free(pointer);
		pointer = next_node;
	}
}
