#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line to stdout.
 *@r: pointer argument that points to the string to be printed.
 *
 * Return: Nothing.
 *
 */

void print_rev(char *r)
{
	char l;
	int Counter;
	int Count = 0;

	while (*(r + Count) != '\0')
	{
		Count++;
	}

	for (Counter = (Count - 1); Counter >= 0; Counter--)
	{
		l = *(r + Counter);

		_putchar(l);
	}

	_putchar('\n');
}
