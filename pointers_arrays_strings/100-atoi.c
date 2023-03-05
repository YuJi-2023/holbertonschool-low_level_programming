#include "main.h"
/*
 * _atoi - A function that convert a string to an integer
 * @s: input string
 * Return: integer converted from the input string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 0;
	int digits = 0;
	int result = 0;
	int power_of_ten = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = sign + 1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			digits = digits + 1;
		}

		if (digits > 0 && (s[i] < '0'|| s[i] > '9'))
		{
			break;
		}
		i = i + 1;
	}

	while (digits > 0)
	{
		result = result + (s[i - 1] - '0') * power_of_ten;
		power_of_ten = power_of_ten * 10;
		i = i - 1;
		digits = digits - 1;
	}

	if (sign % 2 == 1)
	{
		result = result * -1;
	}
	return (result);
}
