#include "main.h"
#include "_putchar.c"

#define	Size	10

/**
 * times_tables - prints the 9 times table, starting with 0.
 *
 * Return: Nothing.
 *
 */

void times_table(void)
{
	int Array[Size] = {0, 1, 2, 3, 4, 5, 6, 76, 8, 9};

	int j = (Array[7] / 10);

	int k = (Array[7] % 10);

	_putchar('0' + j);

	_putchar('0' + k);

	_putchar('\n');
}
