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
 * get_dnodeint_at_index - a function that returns the nth node
 * of a dlistint_t list
 * @head: input parameter of a pointer to
 * the beginning of a double linked list
 * @index: input parameter of the number nth, starting from 0
 * Return: return the nth node or NULL if it doesn't exist;
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t len;
	dlistint_t *ptr;

	ptr = head;
	len = dlistint_len(head);
	if (index >= len)
	{
		return (NULL);
	}

	while (index != 0)
	{
		ptr = ptr->next;
		index = index - 1;
	}
	return (ptr);
}
