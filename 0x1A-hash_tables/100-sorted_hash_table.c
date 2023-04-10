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
shash_node_t *create_shash_node(const char *key, const char *value)
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
		ht->stail = node;
	} else
	{
		tmp = ht->shead;
		while (tmp != NULL && strcmp(tmp->key , node->key) < 0)
			tmp = tmp->next;
		if (tmp == NULL)
		{
			node->sprev = ht->stail;
			node->snext = NULL;
			ht->stail->snext = node;
			ht->stail = node;
		} else
		{
			node->sprev = tmp->sprev;
			node->snext = tmp;
			if (tmp->sprev != NULL)
				tmp->sprev->snext = node;
			else
				ht->shead = node;
			tmp->sprev = node;
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
		node = create_shash_node(key, value);
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
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		node = create_shash_node(key, value);
		if (node == NULL)
		{
			return (0);
		}
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	insert_node_sorted(ht, node);
	return (1);
}
/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: pointer to hash table
 * @key: key
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[index];
	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
void print_node_key_value(shash_node_t *node)
{
	if (node == NULL)
		return;
	printf("'%s': '%s'", node->key, node->value);
	print_node_key_value(node->next);
}
/**
 * shash_table_print - prints a hash table in sorted order.
 * @ht: pointer to hash table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int f;
	shash_node_t *node;

	if (ht == NULL || ht->shead == NULL)
	{
		return;
	}
	printf("{");
	f = 0;
	node = ht->shead;
	while (node != NULL)
	{
		if (f != 0)
		{
			printf(", ");
		}
		f++;
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints a hash table in reverse sorted order
 * @ht: pointer to hash table
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int f;
	shash_node_t *node;

	if (ht == NULL || ht->stail == NULL)
	{
		return;
	}
	printf("{");
	f = 0;
	node = ht->stail;
	while (node != NULL)
	{
		if (f != 0)
		{
			printf(", ");
		}
		f++;
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a shash_table_t hash table
 * @ht: pointer to hast table
 * Return: nothing
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp;

	tmp = ht->shead;
	for (i = 0; i < ht->size; i++)
	{
		free(tmp->key);
		free(tmp->value);
		if (tmp->snext == NULL)
		{
			free(tmp);
			break;
		}
		tmp = tmp->snext;
		free(tmp->sprev);
	}
	free(ht->array);
	free(ht);
}
