#include "main.h"
/**
 * rev_string - a function that reverse a string
 * @s: input sting, also means char typed array
 * Return: no need
 */
void rev_string(char *s)
{
	int len = 0;
	char *first;
	char *last;
	char a;

	while (s[len] != '\0')/*'\0'is the end of the string*/
	{
		len = len + 1;
	}

	*first = s;
	*last = s + len - 1;

	while (first < last)
	{
		a = *first;
		*first = *last;
		*last = a;

		first = first + 1;
		last = last - 1;
	}
}
