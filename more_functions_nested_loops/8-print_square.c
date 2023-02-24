#include "main.h"

/**
 * print_square - print '#' of n times in both dimensions to make a square
 * @size:the number of '#' to be printed in each dimension
 * int h: to count the change horizontally
 * int v: to count the change vertically
 * Return: no value need
 */
void print_square(int size)
{
	int h = 0;
	int v = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (v < size)
		{
			while (h < size)
			{
				_putchar('#');
				h = h + 1;
			}
			_putchar('\n');
			v = v + 1;
			h = 0;
		}
	}
}
