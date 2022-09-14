#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @a: the value to be tested.
 *
 * Return: The absolute value of the arugment.
 *
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (-1 * a);
	}
	else
	{
		return (a);
	}
}
