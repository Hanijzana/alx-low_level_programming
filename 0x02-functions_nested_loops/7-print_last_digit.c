#include  "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @num: the int to print
 *
 * Return: 1 if positive, return -1 if negative else 0.
 */

int print_last_digit(int num)
{
	int n;

	n = num % 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
