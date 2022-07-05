#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: the int to print
 * Return: 1 if positive, return -1 if negative else 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);

	}
}
