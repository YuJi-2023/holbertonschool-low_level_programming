#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @p: takes the input parameter1  (address of the int)
 * @q: takes the input parameter2  (address of the int)
 * Return
 */
void swap_int(int *p, int *q)
{
	int a;
	int b;

	a = *p;
	b = *q;
	*p = b;
	*q = a;
	p = &b;
	q = &a;
}
