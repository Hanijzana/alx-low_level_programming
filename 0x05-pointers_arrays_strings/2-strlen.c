#include "main.h"

/**
 * _strlen - the lenght of a string
 * @s: The Pointer to an int that will be updated
 *
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

