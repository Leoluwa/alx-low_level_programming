#include "main.h"

/**
 * print_times_table - prints the times table of the given argument.
 * @u: the given argument
 *
 * Return: Nothing.
 *
 */
int l;
int m;
int n;
void print_times_table(int u)
{
		for (m = 0; (((u > 0) && (u <= 15)) && (m <= u)); m++)
		{
			for (n = 0; n <= u; n++)
			{
				l = (m * n);
				if ((l / 10) == 0)
				{
					if (n == 0)
					{
						_putchar('0');
					}
					if (n != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar((l % 10) + '0');
					}
					if (n < u)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else if ((l / 10) != 0)
				{
					if ((l / 10) > 9)
					{
						_putchar((l / 100) + '0');
						_putchar(((l % 100) / 10) + '0');
						_putchar(((l % 100) % 10) + '0');
						if (n < u)
						{
							_putchar(',');
							_putchar(' ');
						}
					}
					else
					{
						_putchar(' ');
						_putchar((l / 10) + '0');
						_putchar((l % 10) + '0');
						if (n < u)
						{
							_putchar(',');
							_putchar(' ');
						}
					}
				}
			}
			_putchar('\n');
		}
}
