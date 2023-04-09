#include "hash_tables.h"
/**
 * shash_table_create - creates sorted hash table.
 * @size: size of the hash table
 * Return: pointer to new hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}
/**
 * create_shash_node - create node for sorted hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: value
 * Return: pointer to new shash node
 */
shash_node_t *create_shash_node(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node;

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	node->snext = NULL;
	node->sprev = NULL;
	return (node);
}
/**
 * insert_node_sorted - inserts the new node in the sorted ll
 * @head: pointer to head of sorted hash table nodes
 * @node: node to insert
 * Return: nothing
*/
void insert_node_sorted(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp;

	if (ht->shead == NULL)
	{
		ht->shead = node;
	} else
	{
		tmp = ht->shead;
		do
		{
			if (strcmp(tmp->key, node->key) > 0)
			{
				node->next = tmp;
				ht->shead = node;
				return;
			}
			if (tmp != NULL)
				tmp = tmp->snext;
			else
				break;
		} while (strcmp(tmp->key, node->key) < 0);
		node->sprev = tmp;
		node->snext = tmp->snext;
		if (tmp != NULL)
		{
			tmp->snext = node;
			node->snext = tmp->snext;
		}
	}
}
/**
 * shash_table_set - adds an element to the hash table.
 * @ht: pointer to hash table
 * @key: key of node
 * @value: value of the node
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *tmp;
	unsigned long int index;

	if(strcmp("", key) == 0 || key == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		node = create_shash_node(ht, key, value);
		if (node == NULL)
			return (0);
		ht->array[index] = node;
	} else
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (strcmp(key, tmp->key) == 0)
			{
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		node = create_shash_node(ht, key, value);
		if (node == NULL)
		{
			return (0);
		}
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	insert_node_sorted(ht->shead, node);
	return (1);
}
