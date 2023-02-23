#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting integer number
 * Return: no return value
 */
void print_to_98(int n)
{
		while (n > 98)
		{
			printf("%d, ", n);
			n = n - 1;
		}
		while (n < 98)
		{
			printf("%d, ", n);
			n = n + 1;
		}
		if (n == 98)
			{
			printf("%d", n);
			}
	putchar('\n');
}
