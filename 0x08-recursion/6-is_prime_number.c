#include "main.h"

/**
 * is_prime_number - prime number or not
 * @n: the numebr 
 * @i: iteration
 * Return: 1 if the integer is prime num otherwise 0
 */

int actual_prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - prime number
 * @n: the numebr 
 * @i: iteration
 *
 * Return: 1 if the integer is prime num otherwise 0
 */

int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}

