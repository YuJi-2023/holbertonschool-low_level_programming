#include "main.h"
/**
 * _primecheck - help to check for prime number
 * @n: input integer
 * @i: guess factor
 * Return: 1 if is prime number otherwise 0
 */
int _primecheck(int i, int n)
{
	if ((n % 2) == 0)
	{
		return (0);
	}
	else if (n % i == 0)
	{
		if (i * i == n)
		{
			return (0);
		}
		return (1);
	}
	else
	{
		return (_primecheck(i + 1, n));
	}
}
/**
 * is_prime_number - check for prime number
 * @n: input integer
 * Return: return 1 if prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_primecheck(2, n));
	}
}
