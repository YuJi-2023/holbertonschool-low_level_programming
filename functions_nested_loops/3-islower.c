#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: accept intiger input
 * Return: 1 (if true); otherwise 0
 */
int _islower(int c)
{
	int alpha = c;

	if (alpha >= 97 && alpha <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

