#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number.
 * @p: the argument
 * Return: the last digit of the argument.
 *
 */
int print_last_digit(int p)
{
	int j;

	printf("\n%d\n\n ~ %d\n", p, (p % 10));

	if (p < 0)
	{
		j = ((-1 * p) % 10);

		if ( j == -8 )
		{
			j = 8;
		}

		printf("\n\t*~ %d  if\n\n", j);

		_putchar('0' + j);

		return (j);
	}
	else
	{

		printf("\n\t*~ %d  else\n\n", (p % 10));

		_putchar('0' + (p % 10));

		return (p % 10);
	}
}
