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
	int Count;

	for (Count = 0; (*(str + Count) != '\0'); Count += 2)
	{
		printf("%c", *(str + Count));
	}

	printf("\n");
}
