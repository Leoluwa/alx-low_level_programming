#include "main.h"

/**
 * wildcmp - compares two strings, returns 1 if they are identical, 0 otherwise.
 * @s1: pointer to argument string.
 * @s2: pointer to argument string.
 *
 * Return: an integer.
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (!(*s1) && (!(*s2)))
	{
		return (1);
	}
	else if (*s2 == *s1)
	{
		return (wildcmp((s1 + 1), (s2 + 1)));
	}

	if (*s2 == '*')
	{
		if (wildcmp(s1, (s2 + 1)))
		{
			return (1);
		}

		if (!(*s1))
		{
			return (1);
		}

		if (wildcmp((s1 + 1), s2))
		{
			return (1);
		}
	}


	return (0);
}
