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
	int l = 0, u = 0;
	char *ptr;

	printf("\n\tAfter Declarations In str_Concat.c\n");
	if (s1 == NULL)
	{
		/*(s1 + 0) = '\0';*/
		puts("\ns1 == NULL\n");
	}
	if (s2 == NULL)
	{
		/*(s2 + 0) = '\0';*/
		puts("\ns2 == NULL\n");
	}
	l = 0;
	while (*(s1 + l) != '\0')
	{
		l++;
		puts("\nl Loop\n");
	}
	u = 0;
	/*while (*(s2 + u) != '\0')
	{
		u++;
		puts("\nu Loop\n");
	}*/

	puts("\nBefore malloc\n");
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
