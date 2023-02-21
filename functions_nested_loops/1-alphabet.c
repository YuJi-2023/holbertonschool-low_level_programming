#include "main.h"

/**
 * print_alphabet - writes alphabet in lowercase
 */
void print_alphabet(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		start = start + 1;
	}
	_putchar('\n');
}
