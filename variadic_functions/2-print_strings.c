#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints input strings
 * @n: the number of input strings passed in
 * @separator: pointer to  separator which also need
 * to be printed between input strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list arg;

	va_start(arg, n);
	i = 0;
	while (i < n)
	{
	string = va_arg(arg, char *);
	if (string == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", string);
	}
	if (separator != NULL && i < (n - 1))
		{
		printf("%s", separator);
		}
	i = i + 1;
	}
	printf("\n");
	va_end(arg);
}
