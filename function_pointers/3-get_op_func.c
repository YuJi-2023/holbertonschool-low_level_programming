#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - selects the correct function
 * to perform the operation asked by the user
 * @s: pointer to the passed-in operator as argument to the program
 * Return: function pointer to the asked operation
 * or exit with error if not matching
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i = i + 1;
	}
	printf("Error\n");
	exit(99);
}
