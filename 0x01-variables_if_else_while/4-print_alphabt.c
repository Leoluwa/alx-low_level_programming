/*
 * I am at peace just for the sake of it :)
 *
 * Abdulwahab
 *
 */
#include "stdio.h"
/**
 * main - Entry point
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short Count;

	
	/*
	 * ASCII code :
	 *
	 * For lowercase, a is 97, zis 122, e is 101, q is 113
	 *
	 */


	/*
	 *
	 * Print the alphabets in lowercase, except e and q,
	 * then followed by new line
	 *
	 */
	for (Count = 97; Count <= 122; Count++)
	{
		if ((Count != 101) && (Count != 113))
		{
			putchar(Count);
		}
	}

	putchar('\n');


	return (0);
}
