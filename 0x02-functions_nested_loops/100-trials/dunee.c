#include "main.h"
/**
 * print_times_table - prints the times table of the given argument.
 * @u: the given argument
 * Return: Nothing.
 */
void print_times_table(int u)
{
	if ((u > 0) && (u < 15))
	{
		for (int l = 0, int n = 0, int m = 0; m <= u; m++)
		{
			for (n = 0; n <= u; l = (m * n), n++)
			{
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
}
