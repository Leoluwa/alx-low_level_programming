#include "main.h"

/**
 * _strlen - return the length of a string.
 * @s: a pointer argument that points to the string to be considered.
 *
 * Return: an integer.
 *
 */

int _strlen(char *s)
{
	int Count = 0;

	while (*(s + Count) != '\0')
	{
		Count++;
	}


	return (Count);
}
