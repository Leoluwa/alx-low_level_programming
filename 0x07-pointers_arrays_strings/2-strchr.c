#include "main.h"

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
	int u;

	u = 0;

	while (*(s + u) != '\0')
	{
		u++;
	}

	for (l = 0; l < u; l++)
	{
		if (*(s + l) == c)
		{
			return (s + l);
		}
	}

	return ('\0');
}
