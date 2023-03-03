#include "main.h"
/**
 * reverse_array - a function that reverse an array of integers
 * @a: pointer to an array of integers
 * @n: number of array elements
 * Return: no need
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int p;

	while (i < n / 2)
	{
	i = i + 1;
	p = a[i - 1];
	a[i - 1] = a[n - i];
	a[n - i] = p;
	}
}
