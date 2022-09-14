#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @s: the number to be tested.
 *
 * Return: 1 if s is greater than 0.
 *		0 if s is 0.
 *		-1 if s is less than 0.
 */
int print_sign(int s)
{
	if (s > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (s == 0)
	{
		_putchar('0');

		return (0);
	}
	else if (s < 0)
	{
		_putchar('-');

		return (-1);
	}
	else
	{
		return (-7);
	}
}
