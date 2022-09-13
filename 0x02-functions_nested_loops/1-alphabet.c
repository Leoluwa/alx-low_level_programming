/*
 * I am at peace just for the sake of it :)
 *
 * Abdulwahab
 *
 */
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by new line.
 *			Takes no argument.
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
	/*
	 * ASCII code:
	 *
	 * For lowercase, a is 97, z is 122.
	 *
	 */
	char Count;

	for (Count = 97; Count <= 122; Count++)
	{
		_putchar(Count);
	}

	_putchar('\n');
}
