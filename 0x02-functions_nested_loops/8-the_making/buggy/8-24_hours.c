#include "main.h"
#include <unistd.h>

/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59.
 *
 * Return: Nothing.
 *
 */
void jack_bauer(void)
{
	int l;
	int s;
	int j= 0;


	for (l = 0; l <= 23; l++)
	{
		for (s = 0; s <= 59; s++)
		{
			if (l <= 9)
			{
				write(1,&j, 1);
			}

			write(1, &l, 1);

			_putchar(':');

			if (s <= 9)
			{
				_putchar('0');
			}

			write(1, &s, 1);


			_putchar('\n');
		}
	}
}
