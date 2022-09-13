/*
 * I am at peace just for the sake of it :)
 *
 * Abdulwahab
 *
 */
#include "main.h"

#define	k_index	9
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b;	/* a buffer */
	short Count;	/* for loop counter */

	char Array[k_index] = { '_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n' };

	for (Count = 0; Count < k_index; Count++)
	{
		b = Array[Count];

		_putchar(b);
	}

	return (0);
}
