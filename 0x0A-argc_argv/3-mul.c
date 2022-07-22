#include <stdio.h>
#include<stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: arguements counter
 * @argv: array of arguements
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mult, num1, num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mult = num1 * num2;
		printf("%d\n", mult);
	}
	return (0);
}

