#include "main.h"
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

	if ((s1 == NULL) && (s2 == NULL))
	{
		return (NULL);
	}

	l = 0;
	while (*(s1 + l) != '\0')
	{
		l++;
	}

	u = 0;
	while (*(s2 + u) != '\0')
	{
		u++;
	}

	ptr = (char *)malloc((l + u) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (m = 0; m < l; m++)
		{
			*(ptr + m) = *(s1 + m);
		}

		for (e = 0; m < (l + u); e++, m++)
		{
			*(ptr + m) = *(s2 + e);
		}
	}
	return (ptr);
}
