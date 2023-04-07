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
	hash_node_t *node;
	unsigned int index;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return 0;
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	index = key_value(key, 1024);
	ht[index] = node;
}
