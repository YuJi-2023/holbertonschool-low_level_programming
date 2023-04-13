#include "hash_tables.h"
/**
 * free_element - a function that frees element in a hash table
 * @element: input pointer to the node to be freed
 * Return: void
 */
void free_element(hash_node_t *element)
{
	free(element->key);
	free(element->value);
	free(element);
}

/**
 * hash_table_delete - create a function that deletes a hash table
 * @ht: pointer to the hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *element;
	hash_node_t *temp;

	i = 0;
	while (i < ht->size)
	{
		element = ht->array[i];
		while (element != NULL)
		{
			temp = element;
			element = element->next;
			free_element(temp);
		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
