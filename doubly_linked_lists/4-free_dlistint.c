#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: input parameter of a pointer to the
 * beginning of a double linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	dlistint_t *temp;

	ptr = head;
	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
}
