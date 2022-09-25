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
	int l = 0;
	int i = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}



	if (l < n)
	{
		for (i = 0; i < l; i++)
		{
			*(dest + i) = *(src + i);
		}

		for ( ; l < 90; l++)
		{
			*(dest + l) = '\0';
		}

		for ( ; l < 97; l++)
		{
			*(dest + l) = '*';
		}

		*(dest + (n - 1)) = '\0';
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			*(dest + i) = *(src + i);
		}
	}


	return (dest);
}
