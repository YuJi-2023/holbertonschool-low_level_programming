# include "main.h"
# include <stdlib.h>

/**
 * get_string_len - get the length of a string
 * @str: pointer to an input string
 * Return: length of the string
 */
int get_string_len(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}
/**
 * get_pow - return the result of pow calculation
 * @base: int
 * @exponent: int
 * Return: power calculation result
 */
int get_pow(int base, int exponent)
{
	if (exponent == 0)
	{
		return (1);
	}
	return (base * get_pow(base, exponent - 1));
}
/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int
 * @b: input parameter pointer to binary number
 * Return: converted int or 0 if not convertable
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int len;
	unsigned int result;

	if (b == NULL)
	{
		return (0);
	}
	i = 0;
	result = 0;
	len = get_string_len(b);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			result = result + get_pow(2, (len - i - 1));
		}
		i = i + 1;
	}
	return (result);
}
