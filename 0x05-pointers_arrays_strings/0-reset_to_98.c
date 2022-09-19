#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int, and updates the
 *		value stored in the memory address of the int to 98.
 * @t: pointer to the int variable to be updated.
 *
 * Return: Nothing.
 *
 */
void reset_to_98(int *t)
{
	if ((*t) != 98)
	{
		*t = 98;
	}
}
