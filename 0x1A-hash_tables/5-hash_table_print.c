#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, f;
	hash_node_t *node;

	printf("{");
	f = 0;
	for (i = 0; i < ht->size; i++)
	{
		node = (ht->array)[i];
		if (node == NULL)
			continue;
		while (node != NULL)
		{
			if (f != 0)
			{
				printf(", ");
			}
			f++;
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
