#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @p: the argument
 * Return: the last digit of the argument.
 *
 */
int print_last_digit(int p)
{
	int j;

	if (p < 0)
	{
		j = ((-1 * p) % 10);

		if (j == -8)
		{
			j = 8;
		}

		_putchar('0' + j);

		return (j);
	}
	else
	{
		_putchar('0' + (p % 10));

		return (p % 10);
	}
}
