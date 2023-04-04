#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_dlistint - a function that returns the sum of all the data value(n)
 * in dlistint_t list
 * @head: input parameter of a pointer to a list
 * Return: the sum result or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *ptr;

	if (head == NULL)
	{
		return (0);
	}

	ptr = head;
	sum = 0;
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
