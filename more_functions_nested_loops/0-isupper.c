#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c:input integer
 * Return: (1) if c is uppercase;
 *(0) if c is not uppercase;
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
