#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the String
 * Return: The encoded string
 */

char *leet(char *s)
{
	char *sp = s;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			/*32 is the difference between lower case letters and apper case letters*/
			if (*s == key[i] || *s == key[i] + 32)
			{
				*s = 48 + value[i];
			}
		}
		s++;
	}
	return (s);
}

