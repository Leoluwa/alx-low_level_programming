#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: pointer to the first element of the array.
 * @n: number of elements in the array.
 *
 * Return: Nothing.
 *
 */

void print_array(int *a, int n)
{
	int Count;

	for (Count = 0; Count < n; Count++)
	{
		if (Count < (n - 1))
		{
			printf("%d, ", *(a + Count));
		}
		else
		{
			printf("%d", *(a + Count));
		}
	}

	printf("\n");
}
