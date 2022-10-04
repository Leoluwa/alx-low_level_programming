#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointer to the string.
 *
 * return: nothing.
 *
 */

void _print_rev_recursion(char *s)
{
	char l;

	if (*s)
	{
		l = *(++s);
		_putchar(l);
		_print_rev_recursion(s);
	}

	if (l)
	{
		l = *(s);
		_putchar(l);
	}
}
