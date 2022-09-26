#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - searchs a string for any of a set of bytes.
 * @accept: the bytes to search for.
 * @s: the string to search.
 *
 * Return: a pointer to the byte in @s that matches one of the bytes in
 * 		@accept.
 * 		Or NULL if no such byte is found.
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
				return (s);
		}
		s++;
	}
	return (NULL);
}
