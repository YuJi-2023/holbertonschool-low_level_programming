#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_print - a function that prints a hash table
 * @ht: pointer to the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count;
	hash_node_t *node;
	int flag;

	if (ht == NULL)
		return;
	printf("{");
	count = 0;
	flag = 0;
	while (count < ht->size)
	{
		node = ht->array[count];
		while (node != NULL)
		{
			if (flag != 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			flag = 1;
		}
		count = count + 1;
	}
	printf("}\n");
}
