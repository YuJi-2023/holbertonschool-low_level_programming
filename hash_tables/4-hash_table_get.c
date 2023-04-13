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
	hash_node_t *node_to_get;

	if (key == NULL || ht == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, (ht->size));
	node_to_get = ht->array[index];
	if (node_to_get != NULL)
	{
		while (strcmp(node_to_get->key, key) != 0)
		{
			node_to_get = node_to_get->next;
		}
		return (node_to_get->value);
	}
	return (NULL);
}
