#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that prints numvers of all parameters
 * @n: the number of input integers passed in
 * @separator: pointer to char indicating string
 * to be printed between numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;
	va_list number;

	va_start(number, n);
	i = 0;
	while (i < n)
	{
	value = va_arg(number, int);
	printf("%d", value);

	if (separator != NULL && i < (n - 1))
		{
		printf("%s", separator);
		}
	i = i + 1;
	}
	printf("\n");
	va_end(number);
}
