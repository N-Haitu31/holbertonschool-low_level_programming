#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* list_len - finds the number of nodes in a list
* @h: singly linked list
* Return: number of elements in a linked list
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
