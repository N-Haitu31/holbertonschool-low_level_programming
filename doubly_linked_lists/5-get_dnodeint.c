#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* *get_dnodeint_at_index - gets the node at an index
* @head: head of the list
* @index: index to get
* Return: pointer to the index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *pointer;
	unsigned int counter = 0;

	pointer = head;
	while (pointer != NULL)
	{
		if (counter == index)
		{
			return (pointer);
		}

		counter++;
		pointer = pointer->next;
	}
	return (NULL);
}
