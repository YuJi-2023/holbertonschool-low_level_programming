#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: input parameter
 * Return: 1 (if c is a lowercase character); 0 (if c is not)
 */
int _islower(int c)
{
	int alpha = c;

	if (alpha >= 'a' && alpha <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

