#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to second string.
 *
 * Return: Pointer to the new string.
 *
 */
char *str_concat(char *s1, char *s2)
{
	int e, m;
	char *ptr;
	char type = 0;
	int l = 0, u = 0;

	type = *s1;
	printf("\n%d\n", type);
	while (type)
	{
		type = *(s1 + l);
		l++;
	}

	puts("\nAfter l while\n");

	type = *s2;

	while (type)
	printf("\n%d\n", type);
	{
		type = *(s2 + u);
	}
	puts("\nAfter u while\n");

	ptr = (char *)malloc(((l + u) + 1) * sizeof(char));
	if (ptr == NULL)
	{
		puts("\nptr == NULL\n");
		return (NULL);
	}
	else
	{
		for (m = 0; m < l; m++)
		{
			*(ptr + m) = *(s1 + m);
			puts("\nm for Loop\n");
		}

		for (e = 0; m < (l + u); e++, m++)
		{
			*(ptr + m) = *(s2 + e);
			puts("\ne for Loop\n");
		}
	}
	puts("\nreturned ptr\n");
	return (ptr);
}
