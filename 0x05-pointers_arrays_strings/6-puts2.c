#include "main.h"


/**
 * puts2 - Prints every other character of a string 
 * @str: Pointer to the string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{

		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}

