# include "main.h"
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>

/**
 * main - Write a program that adds positive numbers
 * @argc: count of total command line arguments
 * @argv: the array of character string of each command line argument
 * atoi: to convert string into integer
 * Return: 0 success; if argv[] is not digits, return 1
 */
int main(int argc, char *argv[])
{
	int add;
	int count;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	count = 1;
	while (argc > 1 && count < argc)
	{
		if (isdigit(*argv[count]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add = add + atoi(argv[count]);
			count = count + 1;
		}
	}
	printf("%d\n", add);
	return (0);
}
