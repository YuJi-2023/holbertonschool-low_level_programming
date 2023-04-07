# include "main.h"
# include <stdlib.h>

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer to an input number
 * @index: the given position, starting from 0
 * Return: 1 on success or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (*n & (~(1 << index)));
	return (1);
}
