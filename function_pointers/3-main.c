#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - check the code
 * @argc: count arguments, two numbs one operator
 * @argv: access each input argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int (*function)(int num1, int num2);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && j == 0)
	{
		printf("Error\n");
		exit(100);
	}
	function = get_op_func(argv[2]);
	printf("%d\n", function(i, j));
	return (0);
}
