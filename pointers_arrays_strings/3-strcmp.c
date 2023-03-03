#include "main.h"
/**
 * _strcmp - compare two input strings (ascii code value)
 * @s1: the first string
 * @s2: the second string
 * Return: result of comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i = i + 1;
	}
	result = s1[i] - s2[i];
	return (result);
}
