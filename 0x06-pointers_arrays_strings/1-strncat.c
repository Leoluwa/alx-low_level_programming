#include "main.h"
#include <stdlib.h>

/**
 * _strcat - concatenates n bytes from src with dest.
 * @n: number of characers to use from src.
 * @src: pointer to the string to be attached to dest.
 * @dest: pointer to the string that another one will be attched to.
 *
 * Return: a pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr;
	short Count = 0;
	short Counted = 0;
	short Counter = 0;
	short Counting = 0;

	while ((Count < n) && (*(src + Count) != '\0'))
	{
		Count++;
	}
	while (*(dest + Counter) != '\0')
	{
		Counter++;
	}
	Counted = (Count + Counter);
	ptr = (char *)malloc(Counter);
	for (Counting = 0; Counting < Counter; Counting++)
	{
		*(ptr + Counting) = *(dest + Counting);
	}
	for (Count = 0 ; Count < Counter; Count++)
	{
		*(dest + Count) = *(ptr + Count);
	}
	for (Counting = 0; Count <= Counted; Counting++, Count++)
	{
		if (Count < Counted)
		{
			*(dest + Count) = *(src + Counting);
		}
		if (Count == Counted)
		{
			*(dest + Count) = '\0';
		}
	}
	return (dest);
}
