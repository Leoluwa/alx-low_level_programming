#include "main.h"
#include <stdio.h>
#include "_putchar.c"

#define	Size	10
#define	Size_M	81

/**
 * times_tables - prints the 9 times table, starting with 0.
 *
 * Return: Nothing.
 *
 */

void times_table(void)
{
	int i;
	int j;
	int k;
	int l;
	int Multiples[Size_M];
	int Array[Size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < Size_M; i++)
	{
		for (j = 0; j < Size; j++)
		{
			for (k = 0; k < Size; k++)
			{
				Multiples[i] = (Array[j] * Array[k]);

				/*if (k == 9)
				{
					k = 0;
				}*/
			}
		}
	}

	for (l = 0; l < 20; l++)
	{
		printf("\n\n\t*~ %d\n\n", Multiples[l]);

		_putchar('0' + Multiples[l]);

		_putchar(',');

		_putchar(' ');

		if ((l == 9) || (l == 19))
		{
			_putchar('\n');
		}
	}
}
