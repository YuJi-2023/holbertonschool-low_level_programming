#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - a function that prints all the elements of a double linked list
 * @h: input parameter of a pointer to a list
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}
	return (count);
}
