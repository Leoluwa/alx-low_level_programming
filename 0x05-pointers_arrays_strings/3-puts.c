#include "main.h"

/**
 * _puts - prints a string, followed by a new line to stdout.
 *@q: pointer argument that points to the string to be printed.
 *
 * Return: Nothing.
 *
 */

void _puts(char *q)
{
	char l;
	int Counter;
	int Count = 0;

	while (*(q + Count) != '\0')
	{
		Count++;
	}

	for (Counter = 0; Counter < Count; Counter++)
	{
		l = *(q + Counter);

		_putchar(l);
	}

	_putchar('\n');
}
