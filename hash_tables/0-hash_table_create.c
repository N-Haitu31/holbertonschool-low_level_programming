#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* hash_table_create - creates a hash table.
* @size: size of the hash table.
* Return: pointer to the hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_t_create;

	if (size == 0)
	{
		return (NULL);
	}

	h_t_create = malloc(sizeof(hash_table_t));

	if (h_t_create == NULL)
	{
		return (NULL);
	}

	h_t_create->size = size;

	h_t_create->array = calloc(size, sizeof(hash_node_t *));

	if (h_t_create->array == NULL)
	{
		free(h_t_create);
		return (NULL);
	}

	return (h_t_create);
}
