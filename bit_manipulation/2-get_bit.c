# include "main.h"
# include <stdlib.h>

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: input parameter of an int
 * @index: the given position/bit
 * Return: value of the given bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
	{
		return (-1);
	}
	bit = ((n >> index) & 1);
	return (bit);
}
