#include "main.h"

/**
 * _puts - Prints a string
 * @str: The pointer to an int that will be changed
 *
 * Return: void
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

