#include "main.h"

/**
 * _sqrt - the natural square root of a number
 * @n: integer 
 * @i: integer
 * Return: resulting sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - the natural sqrt of a numbur
 * @n: integer
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

