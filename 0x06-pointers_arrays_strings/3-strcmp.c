#include "main.h"

/**
 * _strcmp - compares two strings.
 * @src: pointer to the first string.
 * @dest: pointer to the second string.
 *
 * Return: an integer.
 */

int  _strcmp(char *dest, char *src)
{
	short Count = 0;
	short Counting = 0;

	while  (*(dest + Count) != '\0')
	{
		Count++;
	}

	while (*(src + Counting) != '\0')
	{
		Counting++;
	}

	if (Count < Counting)
	{
		return (-15);
	}
	else if (Count > Counting)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
