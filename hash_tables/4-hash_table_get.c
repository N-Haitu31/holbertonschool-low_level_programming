#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* *hash_table_get - define function
* @ht: hash table to lookup
* @key: key to lookup in the hash table
* Return: NULL on error, the value of the key on success
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp && strcmp(tmp->key, key) != 0)
	{
		tmp = tmp->next;
	}

	if (tmp)
	{
		return (tmp->value);
	}

	return (NULL);
}
