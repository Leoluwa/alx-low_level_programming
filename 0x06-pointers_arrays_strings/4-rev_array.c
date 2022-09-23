#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - reverses the contents of an array.
 *
 * @a: pointer to the array
 * @n: number of elements in the array.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int *b;
	int Count;
	int Counter = 0;

	b = (int *)malloc(n);

	for (Count = 0; Count < n; Count++)
	{
		*(b + Count) = *(a + Count);
	}

	for ( ; Counter < n; Counter++)
	{
		*(a + Counter) = *(b + (n - (Counter + 1)));
	}
}
