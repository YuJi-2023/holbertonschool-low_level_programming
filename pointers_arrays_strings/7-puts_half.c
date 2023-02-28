#include "main.h"
/**
 * puts_half - prints second half of a string, followed by a new line
 * @str: input sting, also means char typed array
 * Return: no need
 */
void puts_half(char *str)
{
	int len = 0;
	int n = 0;

	while (str[len] != '\0')/*'\0'is the end of the string*/
	{
		len = len + 1;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	while (n < len)
	{
	_putchar(str[n]);
	n = n + 1;
	}
	_putchar('\n');
}
