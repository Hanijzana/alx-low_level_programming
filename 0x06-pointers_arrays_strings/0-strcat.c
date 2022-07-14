#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 * @dest: destination
 * @src: source 
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, lenDest, lenSrc;

	lenDest = strlen(dest);
	lenSrc = strlen(src);

	for (i = 0; i < lenSrc; i++)
	{
		dest[lenDest + i] = src[i];
	}
	dest[lenDest + i] = '\0';
	return (dest);
}

