#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: accept intiger input
 * Return: 1 (if true); otherwise 0
 */
int _isalpha(int c)
{
	int alpha = c;

	if (alpha >= 65 && alpha <= 90 || alpha >= 97 && alpha <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

