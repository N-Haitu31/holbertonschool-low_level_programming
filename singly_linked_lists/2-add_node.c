#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node - add new nodes to the list
* @head: current place in the list
* @str: string to add to the head
* Return: pointer to current position in list
*/

list_t *add_node(list_t **head, const char *str)
{
	char *duplicated_str;
	list_t *new_node;
	unsigned int len = 0;
	const char *temp_str = str;

	while (*temp_str != '\0')
	{
		len++;
		temp_str++;
	}

	duplicated_str = strdup(str);

	if (duplicated_str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(duplicated_str);
		return (NULL);
	}

	new_node->str = duplicated_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);

}
