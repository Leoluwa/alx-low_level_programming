#include "main.h"
#define	Size	10
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *		starting from 00:00 to 23:59.
 * Return: Nothing.
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;
	char Array[Size] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	for (l = 0; l <= 2; l++)
	{
		for (k = 0; k < Size; k++)
		{
			for (j = 0; j <= 5; j++)
			{
				for (i = 0; i < Size; i++)
				{
					_putchar(Array[l]);

					_putchar(Array[k]);

					_putchar(':');

					_putchar(Array[j]);

					_putchar(Array[i]);

					_putchar('\n');
				}
			}

			if ((l == 2) && (k == 3))
			{
				j = 7;

				k = 12;

				l = 4;
			}
		}
	}
}
