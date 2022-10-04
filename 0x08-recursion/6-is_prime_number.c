#include "main.h"

/**
 * primer - figures out if n is prime.
 * @k: an integer.
 * @n: an integer.
 *
 * Return: int.
 *
 */

int primer(int n, int k)
{
	if (k >= 1)
	{
		return (1);
	}

	if (n % k)
	{
		return (0);
	}

	return (primer(n, (k - 1)));
}


/**
 * is_prime_number - returns 1 if n is prime, 0 if otherwise.
 * @n: input integer.
 *
 * Return: integer.
 *
 */

int is_prime_number(int n)
{
	if (!(n % 2) || (n < 2))
	{
		return (0);
	}

	if (!(n % 5))
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	return (primer(2, n));
}
