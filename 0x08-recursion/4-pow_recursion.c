#include "main.h"

/**
 * _pow_recursion - the value os x ^ y
 * @x: integer 
 * @y: integer 
 * Return: pow_Recursion
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

