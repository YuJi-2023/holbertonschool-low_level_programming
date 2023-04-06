#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

/**
 * insert_dnodeint_at_index - a function that inserts a new node to the nth
 * position of a dlistint_t list
 * @h: input parameter of a pointer to a pointer to
 * the beginning of a double linked list
 * @idx: input parameter of the number nth, starting from 0
 * @n: input data value to be added as the new node
 * Return: return the address of the new node
 * or NULL if it fails;
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t len;
	dlistint_t *ptr;
	dlistint_t *newp;

	newp = malloc(sizeof(dlistint_t));
	if (newp == NULL)
		return (NULL);
	newp->prev = NULL;
	newp->next = NULL;
	newp->n = n;
	len = dlistint_len(*h);
	if (idx == 0 && len == 0)
        {
		*h = newp;
		return (*h);
	}
	if (idx >= len)
	{
		free(newp);
		return (NULL);
	}
	ptr = *h;
	while (idx > 1)
	{
		ptr = ptr->next;
		idx = idx - 1;
	}
	if (ptr->next == NULL)
	{
		ptr->next = newp;
		newp->prev = ptr;
	}
	else
	{
		newp->prev = ptr;
		newp->next = ptr->next;
		ptr->next->prev = newp;
		ptr->next = newp;
	}
	return (newp);
}
