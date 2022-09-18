#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - takes an argument and prints all natural numbers
 *		from the value of the argument to 98 in order,
 *		followed by a new line.
 *
 * @v: the to print from.
 *
 */

void print_to_98(int v)
{
	int h = v;

	if (h == 98)
	{
		printf("%d\n", h);
	}
	else
	{
		if (h < 98)
		{
			for ( ; h <= 98; h++)
			{
				if (h == 98)
				{
					printf("%d", h);
				}
				else
				{
					printf("%d, ", h);
				}
			}

			printf("\n");
		}
		else if (h > 98)
		{
			for ( ; h >= 98; h--)
			{
				if (h == 98)
				{
					printf("%d", h);
				}
				else
				{
					printf("%d, ", h);
				}
			}
			printf("\n");
		}
	}
}
