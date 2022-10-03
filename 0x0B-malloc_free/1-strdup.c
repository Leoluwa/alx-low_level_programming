#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string parameter and
 *	     returns a pointer to the duplicate string.
 *
 * @str: Pointer to the string parameter.
 *
 * Return: Pointer to the duplicate string.
 *
 */

char *_strdup(char *str)
{
	size_t l;
	size_t u;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	u = 0;

	while (*(str + u) != '\0')
	{
		u++;
	}

	ptr = (char *)malloc((u + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (l = 0; l < u; l++)
		{
			*(ptr + l) = *(str + l);
		}
	}


	return (ptr);
}
