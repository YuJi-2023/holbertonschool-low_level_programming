#include "hash_tables.h"
/**
 * key_index - a function that generates the index of a key
 * @key: input string of key
 * @size: the size of the array of the hash table
 * Return: the index after applying the hash function
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
