#include "main.h"
/**
 * print_rev - print out a string in reverse
 * @str: input parameter of a char-typed pointer
 * Return: no need
 */
void print_rev(char *str)
{
	int len = 0;/*get the length of the input string*/

	while (*str != '\0')/*'\0'is the end of the string*/
	{
		len = len + 1;
		str = str + 1;/*at the end of the loop, str points to the last char*/
	}

	while (len >= 0)
	{
		_putchar(*str);
		len = len - 1;
		str = str - 1;
	}
	_putchar('\n');
}
