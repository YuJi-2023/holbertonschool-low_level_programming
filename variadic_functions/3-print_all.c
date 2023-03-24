#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - print char -promoted type to int
 * @i: input paramter
 * Return: no need
 */
void print_char(va_list i)
{
	printf("%c", va_arg(i, int));
}
/**
 * print_int - print int
 * @i: input paramter
 * Return: no need
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * print_float - print float, promoted type to double
 * @i: input paramter
 * Return: no need
 */
void print_float(va_list i)
{
	printf("%f", va_arg(i, double));
}
/**
 * print_string - print string, treat NULL as (nil)
 * @i: input paramter
 * Return: no need
 */
void print_string(va_list i)
{
	char *s;

	s = va_arg(i, char *);
	if (s == NULL)
	{
		printf("(nil)");
	}
	printf("%s", s);
}

/**
 * print_all - a function that prints all inputs
 * @format: a list of types of arguments passed in
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int count;
	int i;
	va_list arg;
	print_type ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(arg, format);
	count = 0;
	while (format[count] != '\0' && format != NULL)
	{
		i = 0;
		while (ops[i].f != NULL)
		{
			if (format[count] == *(ops[i].type))
			{
				ops[i].f(arg);
				printf(", ");
			}
			i = i + 1;
		}
		count = count + 1;
	}
	printf("\n");
	va_end(arg);
}
