#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @p: the argument
 * Return: the last digit of the argument.
 *
 */
int print_last_digit(int p)
{
	if (p < 0)
	{
		return ((-1 * p) % 10);
	}
	else
	{
		return (p % 10);
	}
}
