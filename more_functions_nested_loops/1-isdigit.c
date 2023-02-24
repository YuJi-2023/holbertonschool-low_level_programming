#include "main.h"

/**
 * _isdigit - check for a digit (0-9)
 * @c:input parameter
 * Return: (1) if c is a digit betwen 0-9;
 *(0) if c is not a digit;
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
