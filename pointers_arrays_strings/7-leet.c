#include "main.h"
/**
 * leet - encode a string into 1337
 * @str: input string
 * Return: no need
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char alph[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (str[i] != '\0')
	{
		while (j < 10)
		{
			if (str[i] == alph[j])
			{
				str[i] = num[j];
			}
			j = j + 1;
		}
		j = 0;
		i = i + 1;
	}
	return (str);
}
