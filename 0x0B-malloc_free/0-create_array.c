#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a char array and initializes it
 *		  with a specific character.
 *
 * @size: Size of the array.
 * @c: Initial chartarcter.
 *
 * Return: Pointer to the array.
 *
 */

char *create_array(unsigned int size, char c)
{
	size_t u;
	char *ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}
	else
	{

		for (u = 0; u < size; u++)
		{
			*(ptr + u) = c;
		}
	}

	return (ptr);
}
