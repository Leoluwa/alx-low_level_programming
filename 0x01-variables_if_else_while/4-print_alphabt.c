#include "stdio.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short Count;

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
