# include "main.h"
# include <stdlib.h>

/**
 * flip_bits - a function that returns the number of bits need to flip
 * to get from n to m
 * @n: the firstn input number
 * @m: the second input number
 * Return: the number of bits flippted
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result;
	unsigned long int difference;

	difference = n ^ m;
	result = 0;
	while (difference > 0)
	{
		if ((difference & 1) == 1)
		{
			result = result + 1;
		}
		difference = difference >> 1;
	}
	return (result);
}
