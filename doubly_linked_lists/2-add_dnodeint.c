#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_dnodeint - a function that adds a new node at the beginning
 * of a dlistint_t list
 * @head: input parameter of a pointer to a pointer to
 * the beginning of a double linked list
 * @n: input integer that too be added at the beginning
 * Return: the address of the new element or NULL if it faild
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = ptr;
	}
	*head = ptr;
	return (*head);
}
