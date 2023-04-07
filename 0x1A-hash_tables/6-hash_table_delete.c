#include "hash_tables.h"
/**
 * free_hash_node - free hash table node
 * @node: node to be freed
 * Return: nothing
 */
void free_hash_node(hash_node_t *node)
{
	if (node == NULL)
		return;
	if (node->key != NULL)
		free(node->key);
	if (node->value != NULL)
		free(node->value);
	free(node);
}
/**
 * free_hash_col - free hash col recur
 * @col: pointer to head of linked list
 * Return: nothing
 */
void free_hash_col(hash_node_t *col)
{
	if (col == NULL)
		return;
	if (col->next != NULL)
		free_hash_col(col->next);
	else
		return;
	free_hash_node(col);
}
/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		free_hash_col((ht->array)[i]);
	}
	free(ht->array);
	free(ht);
}
