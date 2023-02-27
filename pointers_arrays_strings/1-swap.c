#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: takes the input parameter1  (address of the int)
 * @b: takes the input parameter2  (address of the int)
 * Return
 */
void swap_int(int *a, int *b)
{
	int i;
	int j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
