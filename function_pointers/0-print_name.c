#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - a function that prints a name
 * @name: pointer to input parameter of names
 * @f: function pointer points to functions that take
 * in char * parameter and return void
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}
