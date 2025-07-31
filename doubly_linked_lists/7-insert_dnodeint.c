#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index at which the new node should be added (starting from 0)
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (current != NULL && count < idx)
	{
		count++;
		current = current->next;
	}

	if (current == NULL && count == idx)
	{
		return (add_dnodeint_end(h, n));
	}

	else if (count < idx)
	{
		return (NULL);
	}

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = current->prev;
	new_node->next = current;

	new_node->prev->next = new_node;
	new_node->next->prev = new_node;

	return (new_node);
}
