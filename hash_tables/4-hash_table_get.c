#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: input key
 * Return: pointer to the value associated or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value;
	hash_node_t *node_to_get;

	if (key == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, (ht->size));
	node_to_get = ht->array[index];
	if (node_to_get != NULL && strcmp(node_to_get->key, key) == 0)
	{
		value = node_to_get->value;
		return (value);
	}
	return (NULL);
}
