#include "lists.h"
#include <stdlib.h>
/**
 * free_list - a function that frees a list_t list
 * @head: input parameter of a pointer to the beginning of a linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;
	list_t *temp;

	ptr = head;
	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = temp;
	}
}
