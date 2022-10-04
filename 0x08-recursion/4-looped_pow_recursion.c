#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: integer argument.
 * @y: integer argument.
 *
 * Return: an integer.
 *
 */

int _pow_recursion(int x, int y)
{
	int j = x, count;

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	if (y < 0)
		return (-1);

	for (count = 0; count < (y - 1); count++)
	{
		j *= x;
	}

	return (j);
}
