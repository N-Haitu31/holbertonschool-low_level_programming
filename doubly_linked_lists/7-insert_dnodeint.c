#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *node = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (node != NULL && idx > 0)
	{
		idx--;
		node = node->next;
	}
	if (node == NULL && idx > 0)
	{
		return (NULL);
	}
	else if (node == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		newnode = malloc(sizeof(dlistint_t));
		if (newnode == NULL)
		{
			return (NULL);
		}
		newnode->n = n;
		newnode->next = node;
		newnode->prev = node->prev;
		node->prev->next =  newnode;
		node->prev = newnode;
	}
	return (newnode);
}
