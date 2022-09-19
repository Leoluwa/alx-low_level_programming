#include "main.h"

/**
 * swap_int - takes two integer arguments and swaps their values.
 * @l: int argument whose value will be swapped.
 * @k: int argument whose value will be swapped.
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
