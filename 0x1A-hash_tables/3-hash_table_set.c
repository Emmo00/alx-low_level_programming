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

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	if (strcmp("", key) == 0)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = node;
	} else if (strcmp(key, (ht->array)[index]->key) == 0)
	{
		(ht->array)[index]->value = strdup(value);
		free(node->key);
		free(node->value);
		free(node);
	} else
	{
		tmp = (ht->array)[index];
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (1);
}
