#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *new_node;
	list_t *current;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[length] != '\0')
		length++;

	new_node->len = length;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;
	return (new_node);
}
