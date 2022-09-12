/*
 * I am at peace just for the sake of it :)
 *
 */
#include "stdio.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short Count;

	/*
	 * The ASCII code :
	 *
	 * For lowercase, a is 97, z is 122
	 *
	 * For uppercase, A is 65, Z is 90
	 *
	 */


	/*
	 * UPPERCASE
	 *
	 */
	for (Count = 97; Count <= 122; Count++)
	{
		putchar(Count);
	}

	/*
	 * lowercase
	 *
	 */
	for (Count = 65; Count <= 90; Count++)
	{
		putchar(Count);
	}

	putchar('\n');


	return (0);
}
