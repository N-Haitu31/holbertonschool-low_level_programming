#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sums all nodes in a linked list
 * @head: head of the list
 * Return: the sum of the nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *pointer;

	pointer = head;
	while (pointer != NULL)
	{
		sum += pointer->n;
		pointer = pointer->next;
	}
	return (sum);
}
