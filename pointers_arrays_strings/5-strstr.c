#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: input pointer to the string to be seached and located
 * @needle: input pointer to the substring
 * Return: a pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int len = 0;
	int n = 0;
	int digit = 0;

	while (needle[len] != '\0')
	{
		len = len + 1;
	}
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			while (n < len)
			{
				if (haystack[i + n] == needle[n])
				{
					digit = digit + 1;
				}
				else
				{
					break;
				}
				n = n + 1;
			}
			if (digit == len)
			{
				return (haystack + i);
			}
		}
		i = i + 1;
	}
	if (len == 0)
	{
		return (haystack);
	}
	return (0);
}
