# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * main - minimum number of coins to make change for an amount of money
 * @argc: count of total command line arguments
 * @argv: the array of character string of each command line argument
 * atoi: to convert string into integer
 * Return: 0 success; if argc != 2, return 1
 */
int main(int argc, char *argv[])
{
	int amount;
	int cent[5] = {25, 10, 5, 2, 1};
	int pos;
	int i;
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	amount = atoi(argv[1]);
	pos = 0;
	i = 0;
	j = 0;
	while (pos < 5)
	{
		i = i + amount / cent[pos];
		j = amount % cent[pos];
		amount = j;

		if (amount == 0)
		{
			break;
		}
		pos = pos + 1;
	}
	printf("%d\n", i);
	return (0);
}
