#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - add and print the sum of two diagonal of integers
 * @a: pointer to a  two dimensional array
 * @size: size of the matrix of the integers
 * Return: no need
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int left = 0;
	int right = 0;

	while (i < size)
	{
		left = left + a[i * size + i];
		right = right + a[(size - 1) + (size - 1) * i];
		i = i + 1;
	}
	printf("%d, %d\n", left, right);
}

