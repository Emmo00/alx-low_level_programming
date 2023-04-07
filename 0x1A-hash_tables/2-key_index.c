#include "hash_tables.h"
/**
 * key_index - gets the index of a key using the djb2
 * algorithm
 * @key: key to hash
 * @size: size of the hash table array
 * Return: index at which the key/value pair should be
 * stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
