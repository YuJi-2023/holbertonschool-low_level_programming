#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @r: input parameter of a integer
 * Return: always r
 */
int _abs(int r)
{

	if (r < 0)
	{
		r = (-1) * r;
	}
	return (r);
}
