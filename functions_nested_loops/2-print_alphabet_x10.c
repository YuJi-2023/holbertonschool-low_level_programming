#include "main.h"

/**
 * print_alphabet - writes alphabet in lowercase 10 times
 */
void print_alphabet(void)
{
	char alpha = 'a';
	int count = 0;

	while (count < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha = alpha + 1;
		}
		_putchar('\n');
		count = count + 1;
		alpha = 'a';
	}
}

