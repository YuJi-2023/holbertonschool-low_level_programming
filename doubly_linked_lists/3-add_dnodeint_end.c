#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a dlistint_t list
 * @head: input parameter of a pointer to a pointer that points
 * to the beginning of a double linked list
 * @n: input integer that too be added at the end of the list
 * Return: the address of the new element or NULL if it faild
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
		ptr->prev = temp;
	}
	return (ptr);
}
