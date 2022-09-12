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
	 */
	for (Count = 97; Count <= 122; Count++)
	{
		putchar(Count);
	}

	putchar('\n');


	return (0);
}
