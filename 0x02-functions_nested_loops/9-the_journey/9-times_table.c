#include "main.h"

#define	Size	10

/**
 * times_table - prints the 9 times table starting with 0.
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
	int p;
	int v;
	int Multiples[Size][Size];
	int Arrya[Size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < Size; i++)
	{
		for (j = 0; j < Size; j++)
		{
			Multiples[i][j] = (Arrya[i] * Arrya[j]);
		}
	}

	for (k = 0; k < Size; k++)
	{
		for (l = 0; l < Size; l++)
		{
			if (Multiples[k][l] > 9)
			{
				if ((k != 0) && (Multiples[k][l] <= 9))
				{
					_putchar(' ');
				}

				p = (Multiples[k][l] / Size);

				v = (Multiples[k][l] % Size);

				_putchar('0' + p);

				_putchar('0' + v);
			}
			else
			{
				_putchar('0' + Multiples[k][l]);
			}

			if (l < 9)
			{
				_putchar(',');

				_putchar(' ');
			}

			if (((k <= 4) && (l >= 1)) && (Multiples[k][l] < 9))
			{
				if ((((k == 2) && (l == 4)) || ((k == 4) && (l == 2))) && (Multiples[k][l] == 8))
				{
					;
				}
				else
				{
					_putchar(' ');
				}
			}
		}

		_putchar('\n');

	}
}
