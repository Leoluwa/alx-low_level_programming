#include "main.h"
/*#include <stdio.h>*/

/**
 * print_to_98 - takes an argument and prints all natural numbers
 * 		from the value of the argument to 98 in order,
 * 		followed by a new line.
 *
 * @v: the to print from.
 * 
 */

void print_to_98(int v)
{
	int h = v;

	if (h == 98)
	{
		;
	}
	else
	{
		if (h < 98)
		{
			for ( ;h <= 98; h++)
			{
				if ((h / 10) == 0)
				{
					_putchar(h + '0');

					_putchar(',');

					_putchar(' ');
				}
				else if ((h / 10) != 0)
				{
					_putchar((h / 10) + '0');

					_putchar((h % 10) + '0');

					_putchar(',');

					_putchar(' '):
				}
			}

			putchar("\n");
		}
		else if (h > 98)
		{
			l = h;

			for ( ; l >= 98; l--)
			{
				if ((l / 10) == 0)
				{
					_putchar(l + '0');

					_putchar(',');

					_putchar(' ');
				}
				else if ((l / 10) != 0)
				{
					_putchar((l / 10) + '0');

					_putchar((l % 10) + '0');

					_putchar(',');

					_putchar(' '):
				}
			}

			putchar("\n");
		}
	}
}
