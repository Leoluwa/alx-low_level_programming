#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer the string to be searched
 * @c: character to searched for
 *
 * Return: pointer to the first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] == c)
		{
			return (&(s[l]));
		}
	}

	return (NULL);
}
