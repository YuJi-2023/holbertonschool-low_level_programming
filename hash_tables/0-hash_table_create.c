#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a function that creates a hash table
 * @size: input parameter indicating the size of the array
 * Return: pointer to the newly created hash table or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));

	if (table == NULL)
		return (NULL);
	else
		return (table);
}
