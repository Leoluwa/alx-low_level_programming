#include "main.h"

/**
 * swap - takes two integer arguments and swaps their values.
 * @l, @k: int arguments whose value will be swapped.
 *
 * Return: Nothing.
 *
 */

void swap_int(int *l, int *k)
{
	int hold;

	hold = *l;

	*l = *k;

	*k = hold;
}
