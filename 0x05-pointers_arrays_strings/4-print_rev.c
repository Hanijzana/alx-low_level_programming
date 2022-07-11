#include "main.h"

/**
 * print_rev - Print Reversed string
 * @s: The pointer to an int that will be updated
 *
 * Return: void
 */

void print_rev(char *s)
{
	int counter = 0;

	while (s[counter])
		counter++;

	while (counter--)
	{
		_putchar(s[counter]);

	}

	_putchar('\n');
}

