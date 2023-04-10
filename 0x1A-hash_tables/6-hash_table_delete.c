#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		node = (ht->array)[i];
		while (node != NULL)
		{
			free(node->key);
			free(node->value);
			tmp = node->next;
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
