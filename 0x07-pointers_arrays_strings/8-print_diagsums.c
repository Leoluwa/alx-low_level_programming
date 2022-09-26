#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers.
 * @a: the name of the array
 * @size: the size of the array
 *
 * Return: Nothing.
 *
 */

void print_diagsums(int *a, int size)
{
	int l = 0;
	int u = 0;
	int Sum0 = 0;
	int Sum1 = 0;

	while (l <= (size * size))
	{
		Sum0 += a[l];

		l +=  (size + 1);
	}

	u = (size - 1);

	while (u < ((size * size) - 1))
	{
		Sum1 += a[u];
		u += (size - 1);
	}

	printf("%d, %d\n", Sum0, Sum1);
}
