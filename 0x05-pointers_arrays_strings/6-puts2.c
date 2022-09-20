#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character, starting with the first
 *		character of a string.
 * @str: pointer to the argument string.
 *
 * Return: Always 0.
 *
 */

void puts2(char *str)
{
	int Count = 0;

	while (*(str + Count) != '\0')
	{
		printf("%c", *(str + Count));

		Count += 2;
	}

	printf("\n");
}
