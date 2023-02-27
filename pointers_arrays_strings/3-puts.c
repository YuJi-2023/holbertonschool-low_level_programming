#include "main.h"
/**
 * _puts - print a string
 * @str: input parameter of a char-typed pointer
 * Return: no need
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
