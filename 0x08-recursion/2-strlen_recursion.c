#include "main.h"

/**
 * _strlen_recursion - the length os a string
 * @s: pointer to the string 
 * Return: strlen_recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

