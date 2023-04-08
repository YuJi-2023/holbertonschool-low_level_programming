#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_new_node - a function that create a new node of a dlistint_t
 * @n: input of the value of the new node
 * Return: pointer to the new created node
 */
dlistint_t *create_new_node(int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
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
	dlistint_t *ptr;
	dlistint_t *newp;
	unsigned int count;

	newp = create_new_node(n);
	if (h == NULL || newp == NULL)
	{
		return (NULL);
	}
	ptr = *h;
	if (idx == 0)
	{
		*h = newp;
		newp->next = ptr;
		if (ptr != NULL)
		{
			ptr->prev = newp;
		}
		return (newp);
	}
	count = 1;
	while (idx >= count)
	{
		if (ptr == NULL)
		{
			free(newp);
			return (NULL);
		}
		newp->prev = ptr;
		ptr = ptr->next;
		count = count + 1;
	}
	newp->prev->next = newp;
	newp->next = ptr;

	if (ptr != NULL)
	{
		ptr->prev = newp;
	}
	return (newp);
}
