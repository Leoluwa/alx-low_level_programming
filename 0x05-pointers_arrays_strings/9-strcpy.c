#include "main.h"

/**
 * _strcpy - copies string, including the null byte.
 * @s: pointer to source of string.
 * @l: pointer to destination to copy string to.
 *
 * Return: pointer to destination string was copied to.
 *
 */

char *_strcpy(char *l, char *s)
{
	int Counter;
	int Count = 0;

	while (*(s + Count) != '\0')
	{
		Count++;
	}

	for (Counter = 0; Counter <= Count; Counter++)
	{
		*(l + Counter) = *(s + Counter);
	}


	return (l);
}
