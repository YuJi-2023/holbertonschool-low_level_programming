#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: inpurt parameter of a number
 * Return: if alpha is an alphabetic character, return value is 1; otherwise 0
 */
int _isalpha(int c)
{
	int alpha = c;

	if ((alpha >= 'A' && alpha <= 'Z') || (alpha >= 'a' && alpha <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

