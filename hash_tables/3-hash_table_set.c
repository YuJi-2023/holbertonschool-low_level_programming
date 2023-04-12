#include "hash_tables.h"
#include <stdlib.h>
/**
 * create_element - a function that create an element that is a
 * struct of hash_node_t
 * @key: input key
 * @value: associated input value
 * Return: pointer to the created element
 */
hash_node_t *create_element(const char *key, const char *value)
{
	hash_node_t *element;

	if (key == NULL)
	{
		return (NULL);
	}
	element = malloc(sizeof(hash_node_t));
	element->key = malloc(strlen(key) + 1);
	element->value = malloc(strlen(value) + 1);
	element->next = NULL;
	strcpy(element->key, key);
	strcpy(element->value, value);
	return (element);
}
/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: pointer to the table struct
 * @key: input string of key
 * @value: input string of value
 * Return: 1 on success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element;
	hash_node_t *current_element;
	unsigned int index;
	unsigned long int size;

	if (ht == NULL)
		return (0);

	new_element = create_element(key, value);
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	current_element = ht->array[index];

	if (current_element == NULL)
	{
		ht->array[index] = new_element;
	}
	else
	{
		while (current_element != NULL)
		{
			if (strcmp(current_element->key, key) == 0)
			{
				free(new_element->key);
				free(new_element->value);
				free(new_element);
				current_element->value = strdup(value);
				return (1);
			}
			current_element = current_element->next;
		}
		new_element->next = current_element;
		ht->array[index] = new_element;
	}
	return (1);
}
