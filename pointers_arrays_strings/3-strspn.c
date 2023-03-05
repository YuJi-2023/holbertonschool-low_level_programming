#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: input pointer to the string
 * @accept: input pointer to the substring
 * Return: the numver of bytes in s which consist from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int len = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len = len + 1;
				break;
			}
			j = j + 1;
		}
		if (s[i] != accept[j] && len > 0)
		{
			return (len);
		}
		j = 0;
		i = i + 1;
	}
	return (len);
}
