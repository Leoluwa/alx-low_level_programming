#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the row of the array
 *
 * Return: Nothing.
 *
 */

void print_chessboard(char (*a)[8])
{
	int l;
	int u;

	for (l = 0; l < 8; l++)
	{
		for (u = 0; u < 8; u++)
		{
			if (u  == 7)
			{
				_putchar(a[l][u]);
				_putchar('\n');
			}
			else
			{
				_putchar(a[l][u]);
			}
		}
	}
}
