#include "main.h"
#include <stdlib.h>

/**
 * _strncpy - concatenates n bytes from src with dest.
 * @n: number of characers to use from src.
 * @src: pointer to the string to be attached to dest.
 * @dest: pointer to the string that another one will be attched to.
 *
 * Return: a pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	short Count;
	short Counting = 0;

	for (Count = 0; (*(dest + Count) != '\0'); Count++)
	{
		Count++;
	}
	for (Counting = 0; Counting < n; Counting++)
	{
		{
			*(dest + Counting) = *(src + Counting);
		}
	}

	*(dest + Count) = '\0';

	return (dest);
}
