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
	int l = 0, u = 0;

	while (s[l])
		l++;

	while (l >= u)
	{
		_putchar(s[l]);

		l--;
	}
}
