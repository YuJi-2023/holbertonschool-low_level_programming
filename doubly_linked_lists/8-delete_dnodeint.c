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
 * delete_dnodeint_at_index - a function that deletes the node at
 * index position of a dlistint_t list
 * @head: input parameter of a pointer to a pointer to
 * the beginning of a double linked list
 * @index: input parameter of the index, starting from 0
 * Return: return 1 on success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t len;
	dlistint_t *ptr;
	unsigned int i;

	ptr = *head;
	len = dlistint_len(*head);
	if (*head == NULL || index >= len)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = ptr->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(ptr);
		return (1);
	}
	i = 0;
	while (i < index)
	{
		ptr = ptr->next;
		i = i + 1;
	}
	ptr->prev->next = ptr->next;
	if (ptr->next != NULL)
	{
		ptr->next->prev = ptr->prev;
	}
	free(ptr);
	return (1);
}
