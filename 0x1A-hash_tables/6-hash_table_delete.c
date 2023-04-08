#include "hash_tables.h"
/**
 * free_hash_col - free hash column recur
 * @col: pointer to head of linked list
 * Return: nothing
 */
void free_hash_col(hash_node_t *col)
{
	if (col == NULL)
		return;
	free_hash_col(col->next);
	if (col->key != NULL)
                free(col->key);
        if (col->value != NULL)
                free(col->value);
        free(col);
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
