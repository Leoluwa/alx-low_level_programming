#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the given number.
 *
 * Return: an integer.
 *
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	if((n - 1) > 0)
	{
		return (n * factorial(n - 1));
	}

	return (1);
}
