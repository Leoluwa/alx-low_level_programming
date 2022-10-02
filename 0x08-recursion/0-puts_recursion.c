#include "main.h"

/**
 * _puts_recursion - uses recursion to print a string followed by a new line.
 * @r: Pointer to the string to be printed.
 *
 * Return: Nothing.
 *
 */

void _puts_recursion(char *r)
{
	char l = *r;

	if ((*r) == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(l);

		_puts_recursion(++r);
	}
}
