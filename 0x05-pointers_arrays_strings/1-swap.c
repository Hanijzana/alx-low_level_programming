#include "main.h"

/**
 * swap_int - Swaps the values of two integers a and b
 * @a: The first pointer to an int that will be updated
 * @b: The second to an int that will be updated
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

