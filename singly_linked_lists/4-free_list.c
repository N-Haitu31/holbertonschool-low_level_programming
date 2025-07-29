#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*free_list - Frees a list
*@head: is a head of elements
*Return: NULL
*/

void free_list(list_t *head)
{
	list_t *pointer;
	list_t *next_node;

	pointer = head;

	while (pointer != NULL)
	{
		next_node = pointer->next;
		free(pointer);
		pointer = next_node;
	}

}
