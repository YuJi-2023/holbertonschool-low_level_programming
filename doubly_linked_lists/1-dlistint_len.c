#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - a function that returns the number of elements in
 * in a double linked list
 * @h: input parameter of a pointer to a list
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count = count + 1;
	}
	return (count);
}
