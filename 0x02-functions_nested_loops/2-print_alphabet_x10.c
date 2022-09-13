/*
 * I am at peace just for the sake of it :)
 *
 * Abdulwahab
 *
 */
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase,
 *			followed by new line and takes no argument.
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	/*
	 * ASCII code:
	 *
	 * For lowercase, a is 97, z is 122.
	 *
	 */
	short Ten;
	char Count;

	for (Ten = 0; Ten < 10; Ten++)
	{
		for (Count = 97; Count <= 122; Count++)
		{
			_putchar(Count);
		}

		_putchar('\n');
	}
}
