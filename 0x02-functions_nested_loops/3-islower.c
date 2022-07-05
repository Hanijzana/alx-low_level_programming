#include  "main.h"


/**
 * _islower - a function that checks for lowercase character
 * @c: contains value to be checked
 * Return: 1 if lowercase else 0.
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
