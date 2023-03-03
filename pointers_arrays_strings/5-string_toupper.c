#include "main.h"
/**
 * string_toupper - change all lowercases to uppercases in a string
 * @str: input string
 * Return: no need
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i  = i + 1;
	}
	return (str);
}
