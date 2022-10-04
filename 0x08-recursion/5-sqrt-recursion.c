#include "main.h"

/**
 * sidekick - figure out the nautural sqrt of the given number.
 * @n: the given number.
 * @root: the root.
 *
 * Return: the root.
 *
 */

int sidekick(int n, int root)
{
	if ((root * root) == n)
	{
		return (root);
	}
	else if ((root * root) > n)
	{
		return (-1);
	}
	else
	{
		return (sidekick(n, (root + 1)));
	}
}


/**
 * _sqrt_recursion - returns the natural square root of given number.
 * @n: the given number.
 *
 * Return: an integer.
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (sidekick(n, 0));
}
