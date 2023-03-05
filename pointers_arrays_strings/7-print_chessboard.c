#include "main.h"
/**
 * print_chessboard - print the chessboard
 * @a: passing two dimensional array
 * Return: no need
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j = j + 1;
		}
		_putchar('\n');
		i = i + 1;
		j = 0;
	}
}
