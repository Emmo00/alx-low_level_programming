#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to hash table
 * @key: key of node
 * @value: value of the node
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *tmp;
	unsigned long int index;

	if (strcmp("", key) == 0 || key == NULL || ht == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL)
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;
		(ht->array)[index] = node;
	} else
	{
		tmp = (ht->array)[index];
		while (tmp != NULL)
		{
			if (strcmp(key, tmp->key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = (ht->array)[index];
		(ht->array)[index] = node;
	}
	return (1);
}
