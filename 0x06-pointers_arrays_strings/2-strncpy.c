#include "main.h"

/**
 * _strncpy - Copies n bytes from a string
 * @src: The string to copy from
 * @dest: The location to copy
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int u = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	while (*(dest + u) != '\0')
	{
		u++;
	}

	while (u < 98)
	{
		*(dest + u) = '\0';

		u++;
	}


	return (dest);
}
