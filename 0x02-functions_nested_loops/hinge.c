#include "main.h"
#include "_putchar.c"

#define	Size	10


int main(void)
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

			if (Multiples[k][l] <= 9)
			{
				_putchar(' ');
			}
		}

		_putchar('\n');

	}


	return (0);
}
