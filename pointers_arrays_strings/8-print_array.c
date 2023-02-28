#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: input string, also means int typed array
 * @n: input parameter, int type
 * Return: no need
 */
void print_array(int *a, int n)
{
	int len = 0;
	int i = 0;

	while (a[len] != '\0')
	{
		len = len + 1;

		while (len <= n && n - i > 0)
		{
			if ((n - i) != 1)
			{
				printf("%d, ", a[n - (n - i)]);
			}
			else
			{
				printf("%d", a[n - (n - i)]);
			}
			i = i + 1;
		}
	}
	printf("\n");
}
