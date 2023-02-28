#include "main.h"
/**
 * puts2 - print every other character of a string, starting from the first
 * @str: input sting, also means char typed array
 * Return: no need
 */
void puts2(char *str)
{
	int len = 0;
	int n = 0;

	while (str[len] != '\0')/*'\0'is the end of the string*/
	{
		len = len + 1;
	}

	while (n < len)
	{
	_putchar(str[n]);
	n = n + 2;
	}
	_putchar('\n');
}
