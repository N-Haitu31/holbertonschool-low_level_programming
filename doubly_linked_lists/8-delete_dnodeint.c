#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - deletes a node at an index
* @head: double pointer to the head of the list
* @index: index of the node to delete
* Return: value of the node deleted
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
	dlistint_t *current = *head;
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (-1);
	}

	while (current != NULL && count < index)
	{
		count++;
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}
	current->prev->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (-1);
}
